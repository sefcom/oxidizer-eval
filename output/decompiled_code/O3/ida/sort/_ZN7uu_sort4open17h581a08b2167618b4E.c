_QWORD *__fastcall uu_sort::open(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rax
  __int64 v7; // r12
  _DWORD v9[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v10; // [rsp+10h] [rbp-88h]
  __int64 v11; // [rsp+18h] [rbp-80h]
  __int128 v12; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+30h] [rbp-68h]
  char v14[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  __int128 v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+58h] [rbp-40h]

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  v4 = v3;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_2FA0D, 1LL) )
  {
    v5 = std::io::stdio::stdin();
    a1[1] = alloc::boxed::Box<T>::new(v5);
    v6 = (__int64 (__fastcall **)())&unk_1FFF98;
LABEL_6:
    a1[2] = v6;
    *a1 = 0LL;
    return a1;
  }
  std::fs::File::open(v9, v2, v4);
  if ( !v9[0] )
  {
    a1[1] = alloc::boxed::Box<T>::new(v9[1]);
    v6 = &off_1FFF40;
    goto LABEL_6;
  }
  v7 = v10;
  v11 = v10;
  std::path::Path::to_path_buf(&v12, v2, v4);
  v17 = v13;
  v16 = v12;
  v15 = v7;
  v14[0] = 2;
  a1[1] = alloc::boxed::Box<T>::new(v14);
  a1[2] = &off_1FF678;
  *a1 = 1LL;
  return a1;
}
