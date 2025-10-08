__int64 __fastcall fd::fmt::FormatTemplate::generate(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r15
  _QWORD *v6; // r12
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+8h] [rbp-80h]
  __int64 v17; // [rsp+10h] [rbp-78h]
  __int64 v18; // [rsp+18h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  _QWORD *v22; // [rsp+38h] [rbp-50h]
  _BYTE v23[72]; // [rsp+40h] [rbp-48h] BYREF

  v18 = <&T as core::convert::AsRef<U>>::as_ref(1LL, 0LL);
  if ( *(_DWORD *)a2 == 1 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
             a1,
             *(_QWORD *)(a2 + 16),
             *(_QWORD *)(a2 + 24));
  v22 = a1;
  v19 = 0LL;
  v20 = 1LL;
  v21 = 0LL;
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    v5 = v2;
    v6 = *(_QWORD **)(a2 + 16);
    v7 = 24 * v4;
    do
    {
      v8 = *v6 ^ 0x8000000000000000LL;
      if ( v8 >= 5 )
        v8 = 5LL;
      switch ( v8 )
      {
        case 0uLL:
          fd::fmt::FormatTemplate::replace_separator(&v15, v18, v5, 0LL);
          std::ffi::os_str::OsString::push(&v19, &v15);
          break;
        case 1uLL:
          v12 = fd::fmt::input::basename(v18, v5);
          fd::fmt::FormatTemplate::replace_separator(&v15, v12, v13, 0LL);
          std::ffi::os_str::OsString::push(&v19, &v15);
          break;
        case 2uLL:
          fd::fmt::input::dirname((__int64)&v15, v18, v5);
          v11 = v16;
          fd::fmt::FormatTemplate::replace_separator(v23, v16, v17, 0LL);
          std::ffi::os_str::OsString::push(&v19, v23);
          goto LABEL_5;
        case 3uLL:
          fd::fmt::input::remove_extension((__int64)&v15, v18, v5);
          v11 = v16;
          fd::fmt::FormatTemplate::replace_separator(v23, v16, v17, 0LL);
          std::ffi::os_str::OsString::push(&v19, v23);
          goto LABEL_5;
        case 4uLL:
          v9 = fd::fmt::input::basename(v18, v5);
          fd::fmt::input::remove_extension((__int64)&v15, v9, v10);
          v11 = v16;
          fd::fmt::FormatTemplate::replace_separator(v23, v16, v17, 0LL);
          std::ffi::os_str::OsString::push(&v19, v23);
LABEL_5:
          core::ptr::drop_in_place<std::ffi::os_str::OsString>(v15, v11);
          break;
        case 5uLL:
          std::ffi::os_str::OsString::push(&v19, v6);
          break;
      }
      v6 += 3;
      v7 -= 24LL;
    }
    while ( v7 );
  }
  v14 = v22;
  v22[2] = v21;
  *v14 = v19;
  result = v20;
  v14[1] = v20;
  return result;
}