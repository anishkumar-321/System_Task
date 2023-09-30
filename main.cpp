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

void writeCSV(vector<vector<string>>& data, string filename){
  ofstream outfile(filename);
  if (!outfile.is_open()) {
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
  // Read the CSV file.
  vector<vector<string>> data = readCSV("C:\\Users\\anish\\Downloads\\RELIANCE.csv");

  // Update the row in the CSV file.
  //for(int row=0;row<7;row++){
    // for(int column=0;column<data[row].size();column++){
          updateRow(data, 0, 1, "1805");
     //}
 // }

  // Write the CSV file.
 writeCSV(data, "C:\\Users\\anish\\Downloads\\RELIANCE.csv");

  return 0;
}
double pi=3.1345789;
	stringstream ss;
	ss << fixed << setprecision(3) << pi;
	double value;
	ss >> value;
	cout<<value<<endl;
