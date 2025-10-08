// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_expand::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  _QWORD v5[2]; // [rsp+8h] [rbp-3B0h] BYREF
  __int128 v6; // [rsp+18h] [rbp-3A0h]
  __int128 v7; // [rsp+28h] [rbp-390h]
  __int64 v8; // [rsp+38h] [rbp-380h]
  __int64 v9; // [rsp+40h] [rbp-378h] BYREF
  _BYTE v10[48]; // [rsp+48h] [rbp-370h]
  __int128 v11; // [rsp+78h] [rbp-340h]
  __int64 v12; // [rsp+88h] [rbp-330h]
  __int128 v13; // [rsp+90h] [rbp-328h] BYREF
  __int128 v14; // [rsp+A0h] [rbp-318h]
  __int128 v15; // [rsp+B0h] [rbp-308h]
  _BYTE v16[24]; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 dest; // [rsp+E0h] [rbp-2D8h] BYREF
  __int128 v18; // [rsp+E8h] [rbp-2D0h]
  __int128 v19; // [rsp+F8h] [rbp-2C0h]
  __int128 v20; // [rsp+108h] [rbp-2B0h]
  __int128 v21; // [rsp+118h] [rbp-2A0h]
  __int64 v22; // [rsp+128h] [rbp-290h]

  uu_expand::uu_app(&dest);
  core::iter::traits::iterator::Iterator::collect(v5, a1, a2);
  uu_expand::expand_shortcuts(v16, v5);
  clap_builder::builder::command::Command::try_get_matches_from(&v9, &dest, v16);
  if ( __OFSUB__(-v9, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *(_QWORD *)v10,
             &dest,
             v2,
             -v9);
  v8 = *(_QWORD *)&v10[40];
  v7 = *(_OWORD *)&v10[24];
  v6 = *(_OWORD *)&v10[8];
  v5[0] = v9;
  v5[1] = *(_QWORD *)v10;
  uu_expand::Options::new(&dest, v5);
  v13 = v18;
  v14 = v19;
  v15 = v20;
  if ( dest == 0x8000000000000000LL )
  {
    v4 = alloc::boxed::Box<T>::new(&v13);
  }
  else
  {
    v12 = v22;
    v11 = v21;
    *(_OWORD *)v10 = v13;
    *(_OWORD *)&v10[16] = v14;
    *(_OWORD *)&v10[32] = v15;
    v9 = dest;
    v4 = uu_expand::expand(&v9);
    core::ptr::drop_in_place<uu_expand::Options>(&v9);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v5);
  return v4;
}