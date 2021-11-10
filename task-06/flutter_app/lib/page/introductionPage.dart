import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:flutter_app/page/homePage.dart';
import 'package:introduction_screen/introduction_screen.dart';



class IntroductionPage extends StatelessWidget {


  @override
  Widget build(BuildContext context) => SafeArea(
        child: IntroductionScreen(
          pages: [
            PageViewModel(
              title: 'YOGA SURGE',
              body: "Welcome to yoga world\n\nInhale the future,exhale the past",
              image: buildImage('assets/page1.png'),
              decoration:getPageDecoration()
            ),
            PageViewModel(
              title: 'Healthy Freaks Excersices',
              body: 'Letting go is the hardest asana',
              image: buildImage('assets/page2.png'),
              decoration:getPageDecoration()
            ),
            PageViewModel(
              title: 'Cycling',
              body: 'You cannot always control what goes on outside.But you can always control\n what goes on inside',
              image: buildImage('assets/page3.png'),
              decoration:getPageDecoration()
            ),
            PageViewModel(
              title: 'Meditation',
              body: 'The longest journey of a person is the journey inward',
              image: buildImage('assets/page4.png'),
              decoration:getPageDecoration()
            ),
          ],
          done: Text(
            'Get Started',
            style: TextStyle(
              color: Colors.black,
              fontWeight: FontWeight.bold,
              fontSize: 16
              ),
          ),
          onDone: () => goToHome(context),
          showSkipButton: true,
          skip: Text(
            'Skip',
            style: TextStyle(
              color: Colors.black,
              fontWeight: FontWeight.bold,
              fontSize: 16
            ),
          ),
          showNextButton: false,
          dotsDecorator: getDotDecoration(),
          globalBackgroundColor: Colors.grey[300],
      ) 
   );
   void goToHome(context) => Navigator.of(context).pushReplacement(
     MaterialPageRoute(builder: (_) => HomePage()),
   );

    Widget buildImage(String path) =>
      Center(child: Image.asset(path,width: 350)); 

    DotsDecorator getDotDecoration() => DotsDecorator(
      color: Color(0xFFBDBDBD),
      size: Size(10,10),
      activeSize: Size(22,10),
      activeColor: Colors.black,
      activeShape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(54),
      ),
    );  

    PageDecoration getPageDecoration() => PageDecoration(
      titleTextStyle: TextStyle(fontSize: 28, fontWeight:FontWeight.bold),
      bodyTextStyle: TextStyle(fontSize: 20),
      descriptionPadding: EdgeInsets.all(16).copyWith(bottom: 0),
      imagePadding: EdgeInsets.all(24),
      pageColor:Colors.grey[300]
    );

}