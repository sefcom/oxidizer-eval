char __fastcall uu_df::columns::Column::parse(__int64 a1, __int64 a2)
{
  char result; // al
  char v3; // cl
  char v4; // cl
  char v5; // cl
  char v6; // cl
  char v7; // cl
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl
  char v12; // cl
  bool v13; // zf

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aSource_0, 6LL) )
    return 0;
  v3 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aFstype_0, 6LL);
  result = 11;
  if ( !v3 )
  {
    v4 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aItotal_0, 6LL);
    result = 6;
    if ( !v4 )
    {
      v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aIused_1, 5LL);
      result = 7;
      if ( !v5 )
      {
        v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aIavail_0, 6LL);
        result = 8;
        if ( !v6 )
        {
          v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aIpcent_0, 6LL);
          result = 9;
          if ( !v7 )
          {
            v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aSize, 4LL);
            result = 1;
            if ( !v8 )
            {
              v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aUsed_0, 4LL);
              result = 2;
              if ( !v9 )
              {
                v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aAvail_1, 5LL);
                result = 3;
                if ( !v10 )
                {
                  v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aPcent_0, 5LL);
                  result = 4;
                  if ( !v11 )
                  {
                    v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aFile_0, 4LL);
                    result = 10;
                    if ( !v12 )
                    {
                      v13 = (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aTarget_0, 6LL) == 0;
                      result = 12;
                      if ( !v13 )
                        return 5;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
