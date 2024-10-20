__int64 *__fastcall uu_dd::Output::write_blocks(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-C0h]
  __int64 v25; // [rsp+10h] [rbp-B8h]
  __int64 *v26; // [rsp+18h] [rbp-B0h]
  __int64 v27; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v28; // [rsp+28h] [rbp-A0h]
  __int64 v29; // [rsp+30h] [rbp-98h]
  __int64 v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+48h] [rbp-80h]
  unsigned __int64 v33; // [rsp+50h] [rbp-78h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  __int64 v35; // [rsp+60h] [rbp-68h]
  _QWORD v36[3]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v37; // [rsp+80h] [rbp-48h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 120LL);
  if ( !v4 )
  {
    v36[0] = &off_115C88;
    v36[1] = 1LL;
    v36[2] = 8LL;
    v37 = 0LL;
    core::panicking::panic_fmt(v36, &off_115D08);
  }
  if ( a4 )
  {
    v6 = a2 + 4;
    v34 = a2 + 8;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v26 = a1;
    v28 = v4;
    v35 = v6;
    while ( 2 )
    {
      v29 = v9;
      v30 = v8;
      v31 = v7;
      if ( a4 < v4 )
        v4 = a4;
      v10 = a3;
      v32 = a3 + v4;
      v33 = a4 - v4;
      v24 = 0LL;
      do
      {
        v11 = v4 - v24;
        v25 = v10 + v24;
LABEL_8:
        v12 = v4 - v24;
        switch ( *(_BYTE *)a2 )
        {
          case 0:
LABEL_26:
            v16 = <std::io::stdio::Stdout as std::io::Write>::write(v34, v25, v11);
            goto LABEL_17;
          case 1:
LABEL_9:
            v13 = v24;
            if ( *(_BYTE *)(a2 + 1) )
              goto LABEL_16;
            break;
          case 2:
            goto LABEL_16;
          case 3:
            goto LABEL_28;
        }
        do
        {
          if ( v4 == v13 )
          {
            if ( v11 < 0 )
              core::result::unwrap_failed(aInternalDdErro, 65LL, v36, &unk_115B68, &off_115CF0);
            if ( !<std::fs::File as std::io::Seek>::seek(v6, 2LL, v11) )
            {
              v12 = v4 - v24;
              goto LABEL_28;
            }
            v12 = v15;
LABEL_18:
            if ( (unsigned __int8)std::io::error::Error::kind(v12) != 35 )
            {
              a1 = v26;
              v26[1] = v12;
              v22 = 1LL;
              goto LABEL_35;
            }
            if ( (unsigned __int64)(v12 & 3) - 2 >= 2 && (v12 & 3) != 0 )
            {
              v27 = v12 - 1;
              v18 = *(_QWORD *)(v12 - 1);
              v19 = *(_QWORD *)(v12 + 7);
              if ( *(_QWORD *)v19 )
                (*(void (__fastcall **)(__int64))v19)(v18);
              v20 = *(_QWORD *)(v19 + 8);
              if ( v20 )
                _rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16));
              _rust_dealloc(v27, 24LL, 8LL);
              v12 = v4 - v24;
              v6 = v35;
              switch ( *(_BYTE *)a2 )
              {
                case 0:
                  goto LABEL_26;
                case 1:
                  goto LABEL_9;
                case 2:
                  goto LABEL_16;
                case 3:
                  goto LABEL_28;
              }
            }
            goto LABEL_8;
          }
        }
        while ( *(_BYTE *)(v10 + v13++) == 0 );
LABEL_16:
        v16 = <std::os::unix::net::stream::UnixStream as std::io::Write>::write(v6, v25, v11);
LABEL_17:
        v12 = v17;
        if ( v16 )
          goto LABEL_18;
LABEL_28:
        v21 = *(_QWORD *)(a2 + 16);
        v24 += v12;
      }
      while ( v24 < v4 && *(_BYTE *)(v21 + 77) );
      v8 = (*(_QWORD *)(v21 + 120) > v24) + v30;
      v7 = (*(_QWORD *)(v21 + 120) <= v24) + v31;
      v9 = v24 + v29;
      a4 = v33;
      a1 = v26;
      a3 = v32;
      v4 = v28;
      if ( v33 )
        continue;
      break;
    }
  }
  else
  {
    v9 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
  }
  a1[2] = v9;
  a1[3] = 0LL;
  a1[4] = v7;
  a1[5] = v8;
  v22 = 0LL;
LABEL_35:
  *a1 = v22;
  return a1;
}
