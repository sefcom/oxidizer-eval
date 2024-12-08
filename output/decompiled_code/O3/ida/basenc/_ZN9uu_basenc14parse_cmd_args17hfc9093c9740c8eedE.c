__int64 (__fastcall **__fastcall uu_basenc::parse_cmd_args(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // rax
  char v6; // bp
  __int128 v7; // kr00_16
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+8h] [rbp-370h] BYREF
  __int128 v10; // [rsp+20h] [rbp-358h] BYREF
  int v11; // [rsp+30h] [rbp-348h]
  __int128 v12; // [rsp+34h] [rbp-344h]
  __int128 v13; // [rsp+44h] [rbp-334h]
  int v14; // [rsp+54h] [rbp-324h]
  __int128 v15; // [rsp+58h] [rbp-320h] BYREF
  _BYTE v16[20]; // [rsp+68h] [rbp-310h]
  __int128 v17; // [rsp+7Ch] [rbp-2FCh]
  int v18; // [rsp+8Ch] [rbp-2ECh]
  __int128 v19; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-2D8h]
  __int128 v21; // [rsp+A8h] [rbp-2D0h]
  __int64 v22; // [rsp+B8h] [rbp-2C0h]

  uu_basenc::uu_app(&v19);
  uucore::Args::collect_lossy(v9, a2, a3);
  clap_builder::builder::command::Command::try_get_matches_from(&v15, &v19, v9);
  if ( (_QWORD)v15 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(*((_QWORD *)&v15 + 1));
    result = &off_14D520;
    *(_QWORD *)(a1 + 16) = &off_14D520;
    *(_QWORD *)a1 = 2LL;
    return result;
  }
  v12 = *(_OWORD *)&v16[4];
  v13 = v17;
  v14 = v18;
  v10 = v15;
  v11 = *(_DWORD *)v16;
  v9[0] = &off_14D300;
  v9[1] = &off_14D440;
  v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v9, &v10);
  if ( v5 )
  {
    v6 = *(_BYTE *)(v5 + 16);
    uu_base32::base_common::Config::from(&v19, &v10);
    v7 = v19;
    v8 = v20;
    if ( (_QWORD)v19 != 2LL )
    {
      *(_QWORD *)(a1 + 40) = v22;
      *(_OWORD *)(a1 + 24) = v21;
      *(_OWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v8;
      *(_BYTE *)(a1 + 48) = v6;
      return (__int64 (__fastcall **)())core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v10);
    }
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v19 + 1);
    *(_QWORD *)(a1 + 16) = v8;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v15);
    v20 = *(_QWORD *)v16;
    v19 = v15;
    LODWORD(v21) = 1;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v19);
    *(_QWORD *)(a1 + 16) = &off_14D478;
  }
  *(_QWORD *)a1 = 2LL;
  return (__int64 (__fastcall **)())core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v10);
}
