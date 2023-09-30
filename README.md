I have written the system task using C++ Programming langauge.
This Program is mainly supports functional programming by the way.
You can see there are mainly for functions in the program.
1.)Main function()
    int main() {
  vector<vector<string>> data = readCSV("C:\\Users\\anish\\Downloads\\RELIANCE.csv");
  // Update the row in the CSV file.
          updateRow(data);
  // Write the CSV file.
 writeCSV(data, "C:\\Users\\anish\\Downloads\\RELIANCE.csv");
  return 0;
}
Main function is the starting point for the execution of the program.Insidie the main function  we have three function calls of readCSV(filename),where we passing the path of the file as a parameter in it and it simply reads entire file row by row and this function will pace all 253 rows in the vecto<vector<string>>and the write function accepts input parameters of the data where all 253 rows are stored in these data varibale of vtor<vector<string>>type and then file name as the second parameter becuase we needs file name to fill  the cells data.And the third one which  is readCSV function reads the data from file and it stores all the rows in the data vaiable of the vector<vector<string>> datat type and these readCSV function also handles the corner cases as well.

2.)WriteCSV():The writeCSV mainly accepts the two input parameters of the data  which has all the 253 rows and the file name as the parameter.

#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> readCSV(string filename){
 ifstream infile(filename);
 if (!infile.is_open()) {
 cout << "Could not open CSV file." << endl;
 return {};
 }
 vector<vector<string>> data;
 string line;
 vector<string> previous_row;
 while (getline(infile, line)) {
 stringstream ss(line);
 vector<string> row;
 string column;
 while (getline(ss, column, ',')) {
  if (column.empty()) {
   if (previous_row.size() > row.size()) {
    row.push_back(previous_row[row.size()]);
   }
  }
  else {
   row.push_back(column);
  }
 }
 row.push_back("");
 previous_row = row;
 data.push_back(row);
 }
 infile.close();
 return data;
}

void updateRow(vector<vector<string>>& data, int row, int column, const string& value) {
    double value1=0;
    double value2=0;
    double value3=0;
    double value4=0;
    double value5=0;
    double value6=0;
    for(int i=1;i<=252;i++){
            stringstream ss;
	       ss << fixed << setprecision(3) << pi;
	      double value;
	      ss >> value;
	     cout<<value<<endl;


    data[i][7]=double(value1+stod(data[i][1]))/i);
  value1=value1+stod(data[i][1]);

   data[i][8]=to_string(double(value2+stod(data[i][2]))/i);
    value2=value2+stod(data[i][2]);

    data[i][9]=to_string(double(value3+stod(data[i][3]))/i);
    value3=value3+stod(data[i][3]);

data[i][10]=to_string(double(value4+stod(data[i][4]))/i);
    value4=value4+stod(data[i][4]);

    data[i][11]=to_string(double(value5+stod(data[i][5]))/i);
value5=value5+stod(data[i][5]);

   data[i][12]=to_string(double(value6+stod(data[i][6]))/i);
 value6=value6+stod(data[i][6]);
     }
    }

 outfile(filename);
  if (!outfilvoid writeCSV(vector<vector<string>>& data, string filename){
  ofstreame.is_open()) {
    cout << "Could not open CSV file." << endl;
    return;
  }
  for (int i = 0; i < data.size(); i++) {
    for (int j = 0; j < data[i].size(); j++) {
            if(j!=data[i].size()-1)
              outfile << data[i][j] << ",";
            else
                outfile<<data[i][j];
    }
    outfile << endl;
  }  
  outfile.close();
}
int main() {
  vector<vector<string>> data = readCSV("C:\\Users\\anish\\Downloads\\RELIANCE.csv");
  // Update the row in the CSV file.
          updateRow(data);
  // Write the CSV file.
 writeCSV(data, "C:\\Users\\anish\\Downloads\\RELIANCE.csv");
  return 0;
}
