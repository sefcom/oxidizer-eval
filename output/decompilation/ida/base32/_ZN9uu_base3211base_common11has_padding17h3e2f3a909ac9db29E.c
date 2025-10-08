__int64 __fastcall uu_base32::base_common::has_padding(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 (__fastcall **v4)(); // rdx
  _BYTE *v5; // rax
  bool v6; // bp
  __int64 v7; // rdx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  __int64 v11; // [rsp+18h] [rbp-30h]
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0LL;
  v10 = 1LL;
  v11 = 0LL;
  if ( (std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read_to_end(a2, &v9) & 1) != 0 )
  {
    v3 = uu_base32::base_common::has_padding::{{closure}}(v2);
    v4 = &off_10CEA8;
  }
  else
  {
    v12[0] = v10;
    v12[1] = v10 + v11;
    v5 = (_BYTE *)core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(v12);
    if ( v5 )
      v6 = *v5 == 61;
    else
      v6 = 0;
    if ( (std::io::impls::<impl std::io::Seek for alloc::boxed::Box<S>>::seek(*a2, a2[1]) & 1) == 0 )
    {
      *(_BYTE *)(a1 + 8) = v6;
      *(_QWORD *)a1 = 0LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v9, v10);
    }
    v3 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
  }
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v4;
  return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v9, v10);
}