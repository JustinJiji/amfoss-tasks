import 'package:flutter/material.dart';
import 'package:flutter_app/page/introductionPage.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  static final String title='Welcome';

  @override
  Widget build(BuildContext context) => MaterialApp(
      debugShowCheckedModeBanner: false,
      title: title,
      theme: ThemeData(primarySwatch: Colors.grey),
      home: IntroductionPage(),
  );
}