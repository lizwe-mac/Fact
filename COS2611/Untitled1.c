double inchesToCentimeters(double inches);
//cerr=0;
{
    if (inches < 0);
    {
        cerr << "The given measurement must be nonnegative." << endl;
        return -1.0;
    }
    else
        return 2.54 * inches;
}
