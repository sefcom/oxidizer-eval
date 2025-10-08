__int64 __fastcall rg::generate(__int64 a1, char a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[7]; // [rsp+40h] [rbp-38h] BYREF

  switch ( a2 )
  {
    case 0:
      rg::flags::doc::man::generate((__int64)v5);
      break;
    case 1:
      rg::flags::complete::bash::generate((__int64)v5);
      break;
    case 2:
      rg::flags::complete::zsh::generate((int)v5);
      break;
    case 3:
      rg::flags::complete::fish::generate((__int64)v5);
      break;
    case 4:
      rg::flags::complete::powershell::generate((__int64)v5);
      break;
  }
  v6 = std::io::stdio::stdout();
  v8[0] = core::str::<impl str>::trim_end_matches(v5[1], v5[2]);
  v8[1] = v2;
  v7[0] = v8;
  v7[1] = <&T as core::fmt::Display>::fmt;
  v9[0] = &unk_3EA800;
  v9[1] = 2LL;
  v9[4] = 0LL;
  v9[2] = v7;
  v9[3] = 1LL;
  v3 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v6, v9);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v3);
    *(_BYTE *)a1 = 1;
  }
  else
  {
    *(_WORD *)a1 = 0;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v5);
}