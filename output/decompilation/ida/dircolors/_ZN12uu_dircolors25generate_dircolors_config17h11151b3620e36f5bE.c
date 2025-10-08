_OWORD *__fastcall uu_dircolors::generate_dircolors_config(__int64 a1)
{
  __int64 i; // r12
  char **v2; // rbx
  __int64 v3; // r12
  _OWORD *result; // rax
  char **v5; // [rsp+8h] [rbp-B0h] BYREF
  char ***v6; // [rsp+10h] [rbp-A8h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+18h] [rbp-A0h]
  char ***v8; // [rsp+20h] [rbp-98h]
  __int64 (__fastcall *v9)(); // [rsp+28h] [rbp-90h]
  char **v10; // [rsp+30h] [rbp-88h] BYREF
  char **v11; // [rsp+38h] [rbp-80h] BYREF
  __int64 v12; // [rsp+40h] [rbp-78h]
  char ****v13; // [rsp+48h] [rbp-70h]
  __int64 v14; // [rsp+50h] [rbp-68h]
  __int64 v15; // [rsp+58h] [rbp-60h]
  __int128 v16; // [rsp+68h] [rbp-50h] BYREF
  __int64 v17; // [rsp+78h] [rbp-40h]
  __int64 v18; // [rsp+80h] [rbp-38h]

  v18 = a1;
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 1LL;
  v17 = 0LL;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v16,
    &unk_1C60D,
    &unk_1C7F1);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v16,
    &unk_1C7F1,
    &unk_1C7FE);
  for ( i = 0LL; i != 54; i += 2LL )
  {
    v5 = &(&off_F6738)[i];
    v6 = &v5;
    v7 = <&T as core::fmt::Display>::fmt;
    v11 = &off_F5F10;
    v12 = 2LL;
    v15 = 0LL;
    v13 = &v6;
    v14 = 1LL;
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v16,
    &unk_1C7FE,
    aTerm_1);
  v10 = &off_F68F8;
  v5 = &off_F68F8 + 4;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 6;
  v5 = &off_F68F8 + 10;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 12;
  v5 = &off_F68F8 + 16;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 18;
  v5 = &off_F68F8 + 22;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 24;
  v5 = &off_F68F8 + 28;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 30;
  v5 = &off_F68F8 + 34;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 36;
  v5 = &off_F68F8 + 40;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 42;
  v5 = &off_F68F8 + 46;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 48;
  v5 = &off_F68F8 + 52;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 54;
  v5 = &off_F68F8 + 58;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 60;
  v5 = &off_F68F8 + 64;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 66;
  v5 = &off_F68F8 + 70;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 72;
  v5 = &off_F68F8 + 76;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 78;
  v5 = &off_F68F8 + 82;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 84;
  v5 = &off_F68F8 + 88;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 90;
  v5 = &off_F68F8 + 94;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 96;
  v5 = &off_F68F8 + 100;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  v10 = &off_F68F8 + 102;
  v5 = &off_F68F8 + 106;
  v6 = &v10;
  v7 = <&T as core::fmt::Display>::fmt;
  v8 = &v5;
  v9 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_F5F30;
  v12 = 3LL;
  v15 = 0LL;
  v13 = &v6;
  v14 = 2LL;
  <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v16,
    &unk_1CA71,
    asc_1CAB8);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v16,
    &unk_1CAB9,
    &unk_1CB02);
  v2 = &off_F6C68;
  v3 = 4160LL;
  do
  {
    v10 = v2;
    v5 = v2 + 2;
    v6 = &v10;
    v7 = <&T as core::fmt::Display>::fmt;
    v8 = &v5;
    v9 = <&T as core::fmt::Display>::fmt;
    v11 = (char **)&unk_F5F30;
    v12 = 3LL;
    v15 = 0LL;
    v13 = &v6;
    v14 = 2LL;
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v16, &v11);
    v2 += 4;
    v3 -= 32LL;
  }
  while ( v3 );
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v16,
    &unk_1CB02,
    &unk_1CB48);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v16,
    &unk_1CB48,
    &unk_1CB82);
  result = (_OWORD *)v18;
  *(_QWORD *)(v18 + 16) = v17;
  *result = v16;
  return result;
}