char __fastcall uu_join::get_field_number(
        _QWORD *a1,
        char a2,
        __int64 (__fastcall **a3)(),
        unsigned __int8 a4,
        __int64 (__fastcall **a5)())
{
  __int64 (__fastcall **v5)(); // rax
  __int64 v7; // [rsp+0h] [rbp-90h] BYREF
  char *v8; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+10h] [rbp-80h] BYREF
  _QWORD v10[6]; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp-30h] BYREF
  int v12; // [rsp+78h] [rbp-18h]

  if ( (a2 & 1) != 0 )
  {
    LOBYTE(v5) = a3 != a5;
    if ( ((a3 != a5) & a4) != 0 )
    {
      v7 = (__int64)a3 + 1;
      v8 = (char *)a5 + 1;
      v9[0] = &v7;
      v9[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v9[2] = &v8;
      v9[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v10[0] = &off_FE578;
      v10[1] = 2LL;
      v10[4] = 0LL;
      v10[2] = v9;
      v10[3] = 2LL;
      core::option::Option<T>::map_or_else(v11, v10);
      v12 = 1;
      *a1 = alloc::boxed::Box<T>::new(v11);
      v5 = &off_FE360;
      a1[1] = &off_FE360;
    }
    else
    {
      a1[1] = a3;
      *a1 = 0LL;
    }
  }
  else
  {
    v5 = 0LL;
    if ( (a4 & 1) != 0 )
      v5 = a5;
    a1[1] = v5;
    *a1 = 0LL;
  }
  return (char)v5;
}