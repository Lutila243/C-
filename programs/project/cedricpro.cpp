void printlist (int counter,  double sum1, double sum2, double sum3, char subject, double tcost1, 
                double tcost2, double tcost3, double subtotal, double texttotal, double cheap_total) { //Printing function

for (counter=0; counter < 5; counter++) { //for loop to read in and print data for books and total per subject
infile >> subject >> tcost1 >> tcost2 >> tcost3 ;

subtotal = tcost1 + tcost2 + tcost3 ;
sum1 = sum1 + tcost1;
sum2 = sum2 + tcost2;            //calculations for sums, totals, etc.
sum3 = sum3 + tcost3;
texttotal = texttotal +  subtotal;
cheap_total = cheap_total + minimum(tcost1, tcost2, tcost3);

cout << left << setw(12) << subject << setw(12) << tcost1 << " "  << setw(12) 
<< tcost2 << " " << setw(12) << tcost3 << " "  << setw(12)  << subtotal << " " 
<< setw(12) << minimum(tcost1, tcost2, tcost3) << " " <<  endl;  //output to screen

outfile << left << setw(12) << subject << setw(12) << tcost1 << " "  << setw(12) 
<< tcost2 << " " << setw(12) << tcost3 << " "  << setw(12)  << subtotal << " " 
<< setw(12) << minimum(tcost1, tcost2, tcost3) << " " << endl;  //output to file
}
 } //end of void printlist
