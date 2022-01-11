import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: NinjaCard(),
  ));
}

class NinjaCard extends StatefulWidget {
  @override
  State<NinjaCard> createState() => _NinjaCardState();
}

class _NinjaCardState extends State<NinjaCard> {
  int curLevel = 0;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey[850],
      appBar: AppBar(
        title: Text('Ninja ID Card'),
        backgroundColor: Colors.grey[800],
        centerTitle: true,
        elevation: 0.0,
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          setState(() {
            curLevel += 1;
          });
        },
        child: Icon(Icons.add),
      ),
      body: Padding(
        padding: const EdgeInsets.fromLTRB(30.0, 40.0, 30.0, 0.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: <Widget>[
             Center(
               child: CircleAvatar(
                 backgroundImage: AssetImage('assets/fishie.png'),
                 radius: 40.0,
               ),
             ),
             Divider(height: 30.0,),
             Text('NAME',
              style: TextStyle(
                fontSize: 10.0,
                color: Colors.grey[600]
              ),
             ),
             SizedBox(height: 5.0,),
             Text('Peter Nate',
              style: TextStyle(
                fontSize: 15.0,
                color: Colors.amber[400],
              ),
             ),
             SizedBox(height: 10.0,),
             Text('CURRENT NINJA LEVEL',
              style: TextStyle(
                fontSize: 10.0,
                color: Colors.grey[600]
              ),
             ),
             SizedBox(height: 5.0,),
             Text('$curLevel',
              style: TextStyle(
                fontSize: 15.0,
                color: Colors.amber[400],
              ),
             ),
             SizedBox(height: 10.0,),
             Row(
               children: <Widget>[
                 Icon(Icons.mail,
                  color: Colors.grey[600],
                  ),
                  SizedBox(width: 5.0,),
                 Text('achimugu24@gmail.com',
                 style: TextStyle(
                    fontSize: 10.0,
                    color: Colors.amber[400],
                  ),
                 )
               ],
             ),
          ],
        ),
      ),
    );
  }
}