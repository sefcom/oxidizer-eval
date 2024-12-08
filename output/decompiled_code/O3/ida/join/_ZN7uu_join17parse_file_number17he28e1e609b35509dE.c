__int64 (__fastcall **__fastcall uu_join::parse_file_number(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall **result)(); // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-88h] BYREF
  char v7; // [rsp+28h] [rbp-70h]
  _QWORD v8[6]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v9[24]; // [rsp+60h] [rbp-38h] BYREF
  int v10; // [rsp+78h] [rbp-20h]

  result = (__int64 (__fastcall **)())<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, ::a1, 1LL);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(a1 + 8) = 0;
LABEL_5:
    *(_QWORD *)a1 = 0LL;
    return result;
  }
  result = (__int64 (__fastcall **)())<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, ::a2, 1LL);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(a1 + 8) = 1;
    goto LABEL_5;
  }
  v6[0] = 0LL;
  v6[1] = a2;
  v6[2] = a3;
  v7 = 1;
  v5[0] = v6;
  v5[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v8[0] = &off_136060;
  v8[1] = 1LL;
  v8[4] = 0LL;
  v8[2] = v5;
  v8[3] = 1LL;
  core::option::Option<T>::map_or_else(v9, v8);
  v10 = 1;
  *(_QWORD *)a1 = alloc::boxed::Box<T>::new(v9);
  result = &off_135E48;
  *(_QWORD *)(a1 + 8) = &off_135E48;
  return result;
}
