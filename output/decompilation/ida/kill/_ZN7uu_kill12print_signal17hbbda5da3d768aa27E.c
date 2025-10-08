__int64 __fastcall uu_kill::print_signal(_UNKNOWN **a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 *v7; // r15
  __int64 (__fastcall *v8)(); // r12
  char v9; // bp
  bool v10; // zf
  __int64 v11; // rbp
  __int64 v12; // rax
  char **v13; // r15
  __int64 v14; // r12
  char v15; // bp
  char v17; // [rsp+7h] [rbp-E1h]
  char **v18; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-D8h]
  __int64 **v20; // [rsp+18h] [rbp-D0h]
  __int64 v21; // [rsp+20h] [rbp-C8h]
  __int64 v22; // [rsp+28h] [rbp-C0h]
  __int64 *v23; // [rsp+38h] [rbp-B0h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+40h] [rbp-A8h]
  __int64 v25; // [rsp+48h] [rbp-A0h]
  int v26; // [rsp+50h] [rbp-98h]
  __int64 v27; // [rsp+58h] [rbp-90h]
  __int64 v28; // [rsp+60h] [rbp-88h]
  _UNKNOWN ***v29; // [rsp+68h] [rbp-80h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+70h] [rbp-78h]
  _UNKNOWN **v31; // [rsp+78h] [rbp-70h] BYREF
  _UNKNOWN **v32; // [rsp+80h] [rbp-68h]
  __int64 v33; // [rsp+88h] [rbp-60h]
  char v34; // [rsp+90h] [rbp-58h]
  __int64 v35; // [rsp+98h] [rbp-50h]
  __int64 v36; // [rsp+A0h] [rbp-48h] BYREF
  _QWORD v37[8]; // [rsp+A8h] [rbp-40h] BYREF

  v2 = a2;
  core::num::<impl usize>::from_ascii_radix(&v18, a1, a2);
  v17 = (char)v18;
  v27 = v19;
  v31 = &uucore::features::signals::ALL_SIGNALS;
  v32 = &uucore::features::signals::ALL_SIGNALS + 64;
  v33 = 0LL;
  v3 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v31);
  if ( v4 )
  {
    v5 = v3;
    v35 = (unsigned __int8)v27;
    v28 = a2;
    while ( 1 )
    {
      v36 = v5;
      v6 = v4[1];
      v37[0] = *v4;
      v37[1] = v6;
      if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v37[0], v6, a1, v2) )
        break;
      v29 = (_UNKNOWN ***)v37;
      v30 = <&T as core::fmt::Display>::fmt;
      v18 = &off_E7640;
      v19 = 1LL;
      v22 = 0LL;
      v20 = (__int64 **)&v29;
      v21 = 1LL;
      core::option::Option<T>::map_or_else(&v23, &v18);
      v7 = v23;
      v8 = v24;
      v9 = core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v24, v25, a1, v2);
      core::ptr::drop_in_place<alloc::string::String>(v7, v8);
      v10 = v9 == 0;
      v11 = v28;
      if ( !v10 )
        break;
      v12 = core::fmt::num::imp::<impl usize>::_fmt(v5, &v23, 20LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, v12);
      v13 = v18;
      v14 = v19;
      v15 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, v11, v19, v20);
      core::ptr::drop_in_place<alloc::string::String>(v13, v14);
      if ( v15 || !v17 && (v35 == v5 || v27 == v5 + 128) )
      {
        v23 = v37;
        v24 = <&T as core::fmt::Display>::fmt;
        v18 = (char **)&unk_E7650;
        v19 = 2LL;
        v22 = 0LL;
        v20 = &v23;
        goto LABEL_13;
      }
      v5 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v31);
      v2 = v28;
      if ( !v4 )
        goto LABEL_11;
    }
    v23 = &v36;
    v24 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v18 = (char **)&unk_E7650;
    v19 = 2LL;
    v22 = 0LL;
    v20 = &v23;
LABEL_13:
    v21 = 1LL;
    std::io::stdio::_print(&v18);
    return 0LL;
  }
  else
  {
LABEL_11:
    v31 = 0LL;
    v32 = a1;
    v33 = v2;
    v34 = 1;
    v29 = &v31;
    v30 = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = (char **)&unk_E7670;
    v19 = 2LL;
    v22 = 0LL;
    v20 = (__int64 **)&v29;
    v21 = 1LL;
    core::option::Option<T>::map_or_else(&v23, &v18);
    v26 = 1;
    return alloc::boxed::Box<T>::new(&v23);
  }
}