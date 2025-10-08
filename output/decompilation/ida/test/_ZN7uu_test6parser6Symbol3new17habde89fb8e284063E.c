__int64 __fastcall uu_test::parser::Symbol::new(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // [rsp+8h] [rbp-50h]
  char v9[8]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]

  v2 = *a2;
  result = -*a2;
  if ( __OFSUB__(result, 1LL) )
  {
    *a1 = 6LL;
    return result;
  }
  v4 = a2[1];
  v5 = a2[2];
  result = core::str::converts::from_utf8(v9, v4, v5);
  if ( (v9[0] & 1) != 0 )
    goto LABEL_4;
  v6 = v11;
  v7 = 1LL;
  v8 = v10;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, asc_182C5, 1LL) )
  {
    v7 = 0LL;
LABEL_8:
    *a1 = v7;
    return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v2, v4);
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_182C6, 1LL) )
    goto LABEL_8;
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aA, 2LL);
  if ( (_BYTE)result || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aO, 2LL), (_BYTE)result) )
  {
    a1[1] = v2;
    a1[2] = v4;
    a1[3] = v5;
    *a1 = 2LL;
    return result;
  }
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_182CB, 1LL);
  if ( (_BYTE)result
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_182CC, 2LL), (_BYTE)result)
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_182CE, 2LL), (_BYTE)result)
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_182D0, 1LL), (_BYTE)result)
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_182D1, 1LL), (_BYTE)result) )
  {
    a1[1] = 0LL;
LABEL_18:
    a1[2] = v2;
    a1[3] = v4;
    a1[4] = v5;
    *a1 = 4LL;
    return result;
  }
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aEq, 3LL);
  if ( (_BYTE)result
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aGe, 3LL), (_BYTE)result)
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aGt, 3LL), (_BYTE)result)
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aLe, 3LL), (_BYTE)result)
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aLt, 3LL), (_BYTE)result)
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aNe, 3LL), (_BYTE)result) )
  {
    a1[1] = 1LL;
    goto LABEL_18;
  }
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aEf, 3LL);
  if ( (_BYTE)result
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aNt, 3LL), (_BYTE)result)
    || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aOt, 3LL), (_BYTE)result) )
  {
    a1[1] = 2LL;
    goto LABEL_18;
  }
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aN, 2LL);
  if ( (_BYTE)result || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aZ, 2LL), (_BYTE)result) )
  {
    a1[1] = 0LL;
  }
  else
  {
    result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aB, 2LL);
    if ( !(_BYTE)result )
    {
      result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aC, 2LL);
      if ( !(_BYTE)result )
      {
        result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aD, 2LL);
        if ( !(_BYTE)result )
        {
          result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aE, 2LL);
          if ( !(_BYTE)result )
          {
            result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_182F9, 2LL);
            if ( !(_BYTE)result )
            {
              result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aG, 2LL);
              if ( !(_BYTE)result )
              {
                result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aG_0, 2LL);
                if ( !(_BYTE)result )
                {
                  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_182FF, 2LL);
                  if ( !(_BYTE)result )
                  {
                    result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aK, 2LL);
                    if ( !(_BYTE)result )
                    {
                      result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, asc_18303, 2LL);
                      if ( !(_BYTE)result )
                      {
                        result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aN_0, 2LL);
                        if ( !(_BYTE)result )
                        {
                          result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aO_0, 2LL);
                          if ( !(_BYTE)result )
                          {
                            result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aP, 2LL);
                            if ( !(_BYTE)result )
                            {
                              result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aR, 2LL);
                              if ( !(_BYTE)result )
                              {
                                result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aS, 2LL);
                                if ( !(_BYTE)result )
                                {
                                  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aS_0, 2LL);
                                  if ( !(_BYTE)result )
                                  {
                                    result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aT, 2LL);
                                    if ( !(_BYTE)result )
                                    {
                                      result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aU, 2LL);
                                      if ( !(_BYTE)result )
                                      {
                                        result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, aW, 2LL);
                                        if ( !(_BYTE)result )
                                        {
                                          result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                     v8,
                                                     v6,
                                                     asc_18317,
                                                     2LL);
                                          if ( !(_BYTE)result )
                                          {
LABEL_4:
                                            a1[1] = v2;
                                            a1[2] = v4;
                                            a1[3] = v5;
                                            *a1 = 3LL;
                                            return result;
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
    a1[1] = 1LL;
  }
  a1[2] = v2;
  a1[3] = v4;
  a1[4] = v5;
  *a1 = 5LL;
  return result;
}