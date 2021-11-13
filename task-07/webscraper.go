package main

import(
	"os"
	"log"
	"encoding/csv"
	"github.com/gocolly/colly"
)

func main(){
	fName:="data.csv"
	file,err:= os.Create(fName)
	if err !=nil{
		log.Fatalf("File not created,err :%q",err)
		return
	}
	defer file.Close()

	writer:= csv.NewWriter(file)
	defer writer.Flush()

	c :=colly.NewCollector(
	colly.AllowedDomains("forbes.com","www.forbes.com"),

	)

	c.OnHTML(".{expand: expandedItem === user} td",func(e *colly.HTMLElement){
		writer.Write([]string{
			e.ChildText("a"),
			e.ChildText("span"),
		})
	})

	c.Visit("https://www.forbes.com/real-time-billionaires/#131241903d78")

}
