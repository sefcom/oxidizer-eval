__int64 __fastcall alacritty::config::ui_config::UiConfig::pty_config(__int64 a1, _QWORD *a2)
{
  __int128 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  __int128 v11; // [rsp+0h] [rbp-C8h]
  __int128 v12; // [rsp+10h] [rbp-B8h]
  __int128 v13; // [rsp+20h] [rbp-A8h]
  _BYTE v14[24]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v15; // [rsp+48h] [rbp-80h]
  __int64 v16; // [rsp+50h] [rbp-78h]
  __int64 v17; // [rsp+58h] [rbp-70h]
  __int128 v18; // [rsp+60h] [rbp-68h] BYREF
  __int64 v19; // [rsp+70h] [rbp-58h]
  __int128 v20; // [rsp+78h] [rbp-50h] BYREF
  __int64 v21; // [rsp+88h] [rbp-40h]

  if ( a2[108] == 0x8000000000000001LL )
    *(_QWORD *)&v20 = 0x8000000000000001LL;
  else
    <alacritty::config::ui_config::Program as core::clone::Clone>::clone(&v20, a2 + 108);
  core::option::Option<T>::or_else(v14, &v20, a2);
  *(_QWORD *)&v4 = *(_QWORD *)v14;
  if ( *(_QWORD *)v14 != 0x8000000000000001LL )
  {
    *((_QWORD *)&v4 + 1) = *(_QWORD *)&v14[8];
    v5 = v15;
    if ( *(_QWORD *)v14 == 0x8000000000000000LL )
    {
      v6 = 8LL;
      v7 = 0LL;
      v4 = *(_OWORD *)&v14[8];
      v8 = 0LL;
    }
    else
    {
      v6 = v16;
      v7 = v17;
      v8 = v15;
      v5 = *(_QWORD *)&v14[16];
    }
    v11 = v4;
    *(_QWORD *)&v12 = v5;
    *((_QWORD *)&v12 + 1) = v8;
    *(_QWORD *)&v13 = v6;
    *((_QWORD *)&v13 + 1) = v7;
    if ( a2[98] != 0x8000000000000000LL )
      goto LABEL_6;
LABEL_11:
    *(_QWORD *)v14 = 0x8000000000000000LL;
    goto LABEL_12;
  }
  *(_QWORD *)&v11 = 0x8000000000000000LL;
  if ( a2[98] == 0x8000000000000000LL )
    goto LABEL_11;
LABEL_6:
  <&str as alloc::string::SpecToString>::spec_to_string(&v20, a2[99], a2[100]);
  *(_QWORD *)&v14[16] = v21;
  *(_OWORD *)v14 = v20;
LABEL_12:
  core::option::Option<T>::or_else(&v18, v14, a2);
  result = std::thread::local::LocalKey<T>::with();
  *(_OWORD *)(a1 + 32) = v13;
  *(_OWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  *(_OWORD *)(a1 + 48) = v18;
  *(_QWORD *)(a1 + 64) = v19;
  *(_BYTE *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&off_875358;
  *(_OWORD *)(a1 + 88) = xmmword_875368;
  *(_QWORD *)(a1 + 104) = result;
  *(_QWORD *)(a1 + 112) = v10;
  return result;
}