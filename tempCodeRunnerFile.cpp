    int num, r = 0, remainder, originalNum, count = 0, p;
    cout << "Enter number: ";
    cin >> num;

    // int originalNum = 1634;
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum = originalNum / 10;
        count++;
    }
    originalNum = num;
    // cout << num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        p = pow(remainder, count);
        r = r + p;
        originalNum = originalNum / 10;
    }
    // cout << r;
    if (r == num)
        cout << num << " is armstrong.";
    else
        cout << num << " is not armstrong.";