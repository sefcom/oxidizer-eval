__int64 __fastcall bat::app::App::new(__int64 a1)
{
  unsigned __int8 is_terminal; // bp
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // [rsp+0h] [rbp-A8h]
  __int128 v7; // [rsp+10h] [rbp-98h]
  _BYTE v8[31]; // [rsp+20h] [rbp-88h]
  unsigned __int8 v9; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v10[63]; // [rsp+49h] [rbp-5Fh]
  __int128 v11; // [rsp+88h] [rbp-20h]

  std::io::stdio::stdout();
  is_terminal = std::sys::io::is_terminal::isatty::is_terminal();
  bat::app::App::matches(&v9, is_terminal);
  result = v9;
  if ( v9 == 13 )
  {
    v3 = *(_OWORD *)&v10[7];
    v4 = *(_OWORD *)&v10[23];
    v5 = *(_OWORD *)&v10[39];
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v10[55];
    *(_OWORD *)(a1 + 40) = v5;
    *(_OWORD *)(a1 + 24) = v4;
    *(_OWORD *)(a1 + 8) = v3;
    *(_BYTE *)(a1 + 64) = is_terminal;
  }
  else
  {
    *(_OWORD *)&v8[15] = *(_OWORD *)&v10[47];
    *(_OWORD *)v8 = *(_OWORD *)&v10[32];
    v7 = *(_OWORD *)&v10[16];
    v6 = *(_OWORD *)v10;
    *(_OWORD *)(a1 + 64) = v11;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v8[15];
    *(_OWORD *)(a1 + 33) = *(_OWORD *)v8;
    *(_OWORD *)(a1 + 17) = v7;
    *(_OWORD *)(a1 + 1) = v6;
  }
  *(_BYTE *)a1 = result;
  return result;
}