__int64 __fastcall rg::special(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v4; // rdi
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int128 v9; // [rsp+0h] [rbp-88h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-78h]
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  __int128 v12; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  _QWORD v16[2]; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+68h] [rbp-20h] BYREF

  switch ( (char)a2 )
  {
    case 0:
      v4 = &v9;
      rg::flags::doc::help::generate_short((__int64)&v9);
      goto LABEL_7;
    case 1:
      v4 = &v9;
      rg::flags::doc::help::generate_long((__int64)&v9);
      goto LABEL_7;
    case 2:
      v4 = &v9;
      rg::flags::doc::version::generate_short((__int64)&v9, a2, a3);
      goto LABEL_7;
    case 3:
      v4 = &v9;
      rg::flags::doc::version::generate_long((__int64)&v9, a2);
LABEL_7:
      v5 = 0;
      break;
    case 4:
      v4 = &v12;
      rg::flags::doc::version::generate_pcre2((__int64)&v12);
      v10 = v13;
      v9 = v12;
      v5 = v14 ^ 1;
      break;
  }
  v11 = std::io::stdio::stdout(v4);
  v17[0] = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v9 + 1), v10);
  v17[1] = v6;
  v16[0] = v17;
  v16[1] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v12 = &unk_3EA800;
  *((_QWORD *)&v12 + 1) = 2LL;
  v15 = 0LL;
  v13 = v16;
  v14 = 1LL;
  v7 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v11, &v12);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v7);
    *(_BYTE *)a1 = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 1) = v5;
    *(_BYTE *)a1 = 0;
  }
  return core::ptr::drop_in_place<alloc::string::String>(&v9);
}