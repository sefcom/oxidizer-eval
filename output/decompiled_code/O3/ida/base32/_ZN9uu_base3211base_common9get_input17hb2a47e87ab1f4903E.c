__int64 *__fastcall uu_base32::base_common::get_input(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // dl
  __int64 v4; // rax
  __int64 (__fastcall **v5)(); // rcx
  __int64 v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+8h] [rbp-30h]
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a2 + 16) == 0x8000000000000000LL )
  {
    v10[0] = std::io::stdio::stdin();
    v2 = std::io::stdio::Stdin::lock(v10);
    v4 = alloc::boxed::Box<T>::new(v2, v3 & 1);
    v5 = &off_14A3D8;
LABEL_6:
    v6 = 0LL;
    goto LABEL_7;
  }
  std::fs::File::open(v10);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v8,
    v10,
    a2 + 16);
  v4 = v8;
  if ( !v8 )
  {
    v4 = alloc::boxed::Box<T>::new((unsigned int)v9);
    v5 = &off_14A430;
    goto LABEL_6;
  }
  v5 = v9;
  v6 = 1LL;
LABEL_7:
  a1[1] = v4;
  a1[2] = (__int64)v5;
  *a1 = v6;
  return a1;
}
