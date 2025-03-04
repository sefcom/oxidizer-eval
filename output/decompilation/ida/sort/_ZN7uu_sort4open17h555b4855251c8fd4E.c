__int64 (__fastcall **__fastcall uu_sort::open(_QWORD *a1, __int64 a2))()
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // r12
  _DWORD v8[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v9; // [rsp+10h] [rbp-88h]
  __int64 v10; // [rsp+18h] [rbp-80h]
  __int128 v11; // [rsp+20h] [rbp-78h] BYREF
  __int64 v12; // [rsp+30h] [rbp-68h]
  char v13[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  __int128 v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+58h] [rbp-40h]

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  v4 = v3;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_2494D, 1LL) )
  {
    v5 = std::io::stdio::stdin();
    a1[1] = alloc::boxed::Box<T>::new(v5);
    result = (__int64 (__fastcall **)())&unk_1FBFF8;
  }
  else
  {
    std::fs::File::open(v8, v2, v4);
    if ( v8[0] )
    {
      v7 = v9;
      v10 = v9;
      std::path::Path::to_path_buf(&v11, v2, v4);
      v16 = v12;
      v15 = v11;
      v14 = v7;
      v13[0] = 2;
      a1[1] = alloc::boxed::Box<T>::new(v13);
      result = &off_1FBF88;
      a1[2] = &off_1FBF88;
      *a1 = 1LL;
      return result;
    }
    a1[1] = alloc::boxed::Box<T>::new(v8[1]);
    result = &off_1FBEF8;
  }
  a1[2] = result;
  *a1 = 0LL;
  return result;
}
