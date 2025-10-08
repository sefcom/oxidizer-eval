__int64 (__fastcall **__fastcall uu_basenc::parse_cmd_args(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 v4; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // rax
  char v7; // bp
  __int128 v8; // kr00_16
  __int64 v9; // rcx
  __int128 v10; // [rsp+0h] [rbp-348h] BYREF
  _BYTE v11[36]; // [rsp+10h] [rbp-338h]
  int v12; // [rsp+34h] [rbp-314h]
  __int128 v13; // [rsp+38h] [rbp-310h] BYREF
  __int64 v14; // [rsp+48h] [rbp-300h]
  _QWORD v15[2]; // [rsp+50h] [rbp-2F8h] BYREF
  __int128 dest; // [rsp+60h] [rbp-2E8h] BYREF
  int v17; // [rsp+70h] [rbp-2D8h]
  __int128 v18; // [rsp+74h] [rbp-2D4h]
  __int128 v19; // [rsp+84h] [rbp-2C4h]
  int v20; // [rsp+94h] [rbp-2B4h]

  uu_basenc::uu_app(&dest);
  uucore::Args::collect_lossy(&v13, a2, a3);
  clap_builder::builder::command::Command::try_get_matches_from(&v10, &dest, &v13);
  if ( __OFSUB__(-(__int64)v10, 1LL) )
  {
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(*((_QWORD *)&v10 + 1), &dest, v4, -(__int64)v10);
    result = &off_110CC0;
    *(_QWORD *)(a1 + 16) = &off_110CC0;
    *(_QWORD *)a1 = 2LL;
  }
  else
  {
    v18 = *(_OWORD *)&v11[4];
    v19 = *(_OWORD *)&v11[20];
    v20 = v12;
    dest = v10;
    v17 = *(_DWORD *)v11;
    v15[0] = &off_110AD8;
    v15[1] = &off_110C18;
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v15, &dest);
    if ( v6 )
    {
      v7 = *(_BYTE *)(v6 + 16);
      uu_base32::base_common::Config::from(&v10, &dest);
      v8 = v10;
      v9 = *(_QWORD *)v11;
      if ( (_QWORD)v10 == 2LL )
      {
        *(_QWORD *)(a1 + 8) = *((_QWORD *)&v10 + 1);
        *(_QWORD *)(a1 + 16) = v9;
        *(_QWORD *)a1 = 2LL;
      }
      else
      {
        *(_QWORD *)(a1 + 40) = *(_QWORD *)&v11[24];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v11[8];
        *(_OWORD *)a1 = v8;
        *(_QWORD *)(a1 + 16) = v9;
        *(_BYTE *)(a1 + 48) = v7;
      }
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, aMissingEncodin, 21LL);
      *(_QWORD *)v11 = v14;
      v10 = v13;
      *(_DWORD *)&v11[8] = 1;
      *(_QWORD *)(a1 + 8) = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v10);
      *(_QWORD *)(a1 + 16) = &off_110C38;
      *(_QWORD *)a1 = 2LL;
    }
    return (__int64 (__fastcall **)())core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&dest);
  }
  return result;
}