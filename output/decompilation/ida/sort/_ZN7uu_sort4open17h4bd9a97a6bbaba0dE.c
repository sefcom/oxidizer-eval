__int64 (__fastcall **__fastcall uu_sort::open(_QWORD *a1, __int64 a2))()
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // r12
  _BYTE v8[4]; // [rsp+8h] [rbp-90h] BYREF
  unsigned int v9; // [rsp+Ch] [rbp-8Ch]
  __int64 v10; // [rsp+10h] [rbp-88h]
  __int64 v11; // [rsp+18h] [rbp-80h]
  __int128 v12; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+30h] [rbp-68h]
  unsigned __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  __int128 v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+58h] [rbp-40h]

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  v4 = v3;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_2738C, 1LL) )
  {
    v5 = std::io::stdio::stdin();
    a1[1] = alloc::boxed::Box<T>::new(v5);
    result = (__int64 (__fastcall **)())&unk_18A3E0;
  }
  else
  {
    std::fs::File::open(v8, v2, v4);
    if ( (v8[0] & 1) != 0 )
    {
      v7 = v10;
      v11 = v10;
      std::path::Path::to_path_buf(&v12, v2, v4);
      v16 = v13;
      v15 = v12;
      v17 = v7;
      v14 = 0x8000000000000002LL;
      a1[1] = alloc::boxed::Box<T>::new(&v14);
      result = &off_18A378;
      a1[2] = &off_18A378;
      *a1 = 1LL;
      return result;
    }
    a1[1] = alloc::boxed::Box<T>::new(v9);
    result = &off_18A300;
  }
  a1[2] = result;
  *a1 = 0LL;
  return result;
}