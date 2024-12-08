void __fastcall uu_join::get_field_number(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // [rsp+0h] [rbp-90h] BYREF
  __int64 v6; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+10h] [rbp-80h] BYREF
  _QWORD v8[6]; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v9[24]; // [rsp+60h] [rbp-30h] BYREF
  int v10; // [rsp+78h] [rbp-18h]

  if ( a2 == 1 )
  {
    if ( a4 != 1 || a3 == a5 )
    {
      a1[1] = a3;
      *a1 = 0LL;
    }
    else
    {
      v5 = a3 + 1;
      v6 = a5 + 1;
      v7[0] = &v5;
      v7[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v7[2] = &v6;
      v7[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v8[0] = &off_136030;
      v8[1] = 2LL;
      v8[4] = 0LL;
      v8[2] = v7;
      v8[3] = 2LL;
      core::option::Option<T>::map_or_else(v9, v8);
      v10 = 1;
      *a1 = alloc::boxed::Box<T>::new(v9);
      a1[1] = &off_135E48;
    }
  }
  else
  {
    if ( !a4 )
      a5 = 0LL;
    a1[1] = a5;
    *a1 = 0LL;
  }
}
