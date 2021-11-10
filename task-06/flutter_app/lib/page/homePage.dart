import 'package:flutter/material.dart';
import 'package:flutter_app/main.dart';
import 'package:flutter_app/page/introductionPage.dart';




class  HomePage extends StatelessWidget {

  @override
  Widget build(BuildContext context) => Scaffold(
        appBar: AppBar(
          title: Text(MyApp.title),
          leading: BackButton(color: Colors.black,onPressed: () => goToIntro(context),),
        ),
        
        body: Column(
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            Image.asset('assets/welcome.png',height: 200),
            Text(
              '\nJustin Jiji',
              style: TextStyle(fontSize: 30, fontWeight: FontWeight.bold),
            ),
             Text('\n\nHi guys,I am Justin from Kollam,Kerala.My hobbies include playing football,watching movies and coding.On the way to learn more :)',
             style: TextStyle(fontSize: 20,fontWeight: FontWeight.bold),
             textAlign: TextAlign.center,
             )
          ],
        ),
      );
  void goToIntro(context) => Navigator.of(context).pushReplacement(
    MaterialPageRoute(builder: (_) => IntroductionPage())
  );
}