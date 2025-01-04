_QWORD *__fastcall uu_sort::open(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // rax
  __int64 v8; // r12
  _DWORD v10[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v11; // [rsp+10h] [rbp-88h]
  __int64 v12; // [rsp+18h] [rbp-80h]
  __int128 v13; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+30h] [rbp-68h]
  char v15[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v16; // [rsp+40h] [rbp-58h]
  __int128 v17; // [rsp+48h] [rbp-50h]
  __int64 v18; // [rsp+58h] [rbp-40h]

  v3 = <&T as core::convert::AsRef<U>>::as_ref(a2, a3);
  v5 = v4;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, asc_2FA0D, 1LL) )
  {
    v6 = std::io::stdio::stdin();
    a1[1] = alloc::boxed::Box<T>::new(v6);
    v7 = (__int64 (__fastcall **)())&unk_1FFF98;
LABEL_6:
    a1[2] = v7;
    *a1 = 0LL;
    return a1;
  }
  std::fs::File::open(v10, v3, v5);
  if ( !v10[0] )
  {
    a1[1] = alloc::boxed::Box<T>::new(v10[1]);
    v7 = &off_1FFF40;
    goto LABEL_6;
  }
  v8 = v11;
  v12 = v11;
  std::path::Path::to_path_buf(&v13, v3, v5);
  v18 = v14;
  v17 = v13;
  v16 = v8;
  v15[0] = 2;
  a1[1] = alloc::boxed::Box<T>::new(v15);
  a1[2] = &off_1FF678;
  *a1 = 1LL;
  return a1;
}
