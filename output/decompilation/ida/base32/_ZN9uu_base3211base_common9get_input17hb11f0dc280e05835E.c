_QWORD *__fastcall uu_base32::base_common::get_input(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 (__fastcall **v5)(); // rax
  __int128 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]

  if ( !__OFSUB__(0LL, a2[2]) )
  {
    std::fs::File::open(&v9, a2 + 2);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v7,
      &v9,
      a2[3],
      a2[4]);
    if ( (_QWORD)v7 )
    {
      v4 = *((_QWORD *)&v7 + 1);
      a1[1] = v7;
      a1[2] = v4;
      *a1 = 1LL;
      return a1;
    }
    a1[1] = alloc::boxed::Box<T>::new(DWORD2(v7));
    v5 = &off_10DFA8;
LABEL_8:
    a1[2] = v5;
    *a1 = 0LL;
    return a1;
  }
  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 1LL;
  v8 = 0LL;
  *(_QWORD *)&v9 = std::io::stdio::stdin();
  if ( (<std::io::stdio::Stdin as std::io::Read>::read_to_end(&v9, &v7) & 1) == 0 )
  {
    v10 = v8;
    v9 = v7;
    v11 = 0LL;
    a1[1] = alloc::boxed::Box<T>::new(&v9);
    v5 = &off_10DEE0;
    goto LABEL_8;
  }
  a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
  a1[2] = v3;
  *a1 = 1LL;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, *((_QWORD *)&v7 + 1));
  return a1;
}