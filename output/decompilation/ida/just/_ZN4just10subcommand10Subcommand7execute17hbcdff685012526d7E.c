__int64 __fastcall just::subcommand::Subcommand::execute(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  __int64 v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rax
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // rax
  char v17; // al
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  char v24; // al
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  _BYTE v30[104]; // [rsp+20h] [rbp-7E8h] BYREF
  _BYTE v31[48]; // [rsp+90h] [rbp-778h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-748h]
  __int128 v33; // [rsp+D0h] [rbp-738h]
  _OWORD v34[3]; // [rsp+E0h] [rbp-728h] BYREF
  _OWORD v35[54]; // [rsp+118h] [rbp-6F0h] BYREF
  _QWORD v36[114]; // [rsp+478h] [rbp-390h] BYREF

  v4 = *a2;
  v5 = *a2 ^ 0x8000000000000000LL;
  switch ( v5 )
  {
    case 0uLL:
      just::subcommand::Subcommand::changelog();
      *(_BYTE *)a1 = 56;
      break;
    case 3uLL:
      just::subcommand::Subcommand::completions(*((unsigned int *)a2 + 2));
      *(_BYTE *)a1 = 56;
      break;
    case 9uLL:
      just::subcommand::Subcommand::init(a1, a3);
      break;
    case 0xBuLL:
      just::subcommand::Subcommand::man(a1);
      break;
    case 0xCuLL:
      just::subcommand::Subcommand::request(a1, a2 + 1);
      break;
    default:
      if ( *(_QWORD *)(a3 + 120) == 0x8000000000000000LL )
        v8 = 0LL;
      else
        v8 = *(_QWORD *)(a3 + 128);
      just::search::Search::find(
        (__int64)v35,
        v8,
        *(_QWORD *)(a3 + 136),
        *(_QWORD *)(a3 + 32),
        *(_QWORD *)(a3 + 40),
        (_QWORD *)(a3 + 264));
      v32 = *(_OWORD *)((char *)v35 + 8);
      v33 = *(_OWORD *)((char *)&v35[1] + 8);
      if ( *(_QWORD *)&v35[0] == 0x8000000000000000LL )
      {
        *(_OWORD *)((char *)&v35[1] + 7) = v33;
        *(_OWORD *)((char *)v35 + 7) = v32;
        *(_BYTE *)a1 = 42;
        v9 = v35[1];
        *(_OWORD *)(a1 + 1) = v35[0];
        *(_OWORD *)(a1 + 17) = v9;
        *(_QWORD *)(a1 + 32) = *(_QWORD *)((char *)&v35[1] + 15);
      }
      else
      {
        *(_OWORD *)&v31[8] = v32;
        *(_OWORD *)&v31[24] = v33;
        *(_QWORD *)v31 = *(_QWORD *)&v35[0];
        *(_QWORD *)&v31[40] = *((_QWORD *)&v35[2] + 1);
        if ( v4 == 0x8000000000000005LL )
        {
          just::subcommand::Subcommand::edit(a1, v31);
        }
        else
        {
          just::subcommand::Subcommand::compile(v35);
          *(_OWORD *)v30 = *(_OWORD *)((char *)v35 + 8);
          *(_OWORD *)&v30[16] = *(_OWORD *)((char *)&v35[1] + 8);
          *(_OWORD *)&v30[32] = *(_OWORD *)((char *)&v35[2] + 8);
          *(_OWORD *)&v30[48] = *(_OWORD *)((char *)&v35[3] + 8);
          *(_OWORD *)&v30[64] = *(_OWORD *)((char *)&v35[4] + 8);
          *(_OWORD *)&v30[80] = *(_OWORD *)((char *)&v35[5] + 8);
          *(_QWORD *)&v30[96] = *((_QWORD *)&v35[6] + 1);
          if ( *(_QWORD *)&v35[0] == 0x8000000000000000LL )
          {
            *(_QWORD *)(a1 + 96) = *(_QWORD *)&v30[96];
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v30[80];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v30[64];
            v10 = *(_OWORD *)v30;
            v11 = *(_OWORD *)&v30[16];
            v12 = *(_OWORD *)&v30[32];
            *(_OWORD *)(a1 + 48) = *(_OWORD *)&v30[48];
            *(_OWORD *)(a1 + 32) = v12;
            *(_OWORD *)(a1 + 16) = v11;
            *(_OWORD *)a1 = v10;
          }
          else
          {
            memcpy(&v36[14], &v35[7], 0x2F0uLL);
            *(_OWORD *)&v36[1] = *(_OWORD *)v30;
            *(_OWORD *)&v36[3] = *(_OWORD *)&v30[16];
            *(_OWORD *)&v36[5] = *(_OWORD *)&v30[32];
            *(_OWORD *)&v36[7] = *(_OWORD *)&v30[48];
            *(_OWORD *)&v36[9] = *(_OWORD *)&v30[64];
            *(_OWORD *)&v36[11] = *(_OWORD *)&v30[80];
            v36[13] = *(_QWORD *)&v30[96];
            v13 = 2LL;
            if ( v5 < 0x11 )
              v13 = v5;
            v36[0] = *(_QWORD *)&v35[0];
            switch ( v13 )
            {
              case 0LL:
              case 3LL:
              case 5LL:
              case 9LL:
              case 11LL:
              case 12LL:
                core::panicking::panic(aInternalErrorE, 40LL, &off_431038);
              case 1LL:
                if ( a2[1] == 0x8000000000000000LL )
                  LODWORD(v14) = 0;
                else
                  v14 = a2[2];
                just::subcommand::Subcommand::choose(
                  (unsigned int)v35,
                  a3,
                  (unsigned int)v36,
                  (unsigned int)v31,
                  (_DWORD)a2 + 32,
                  v14,
                  a2[3]);
                goto LABEL_39;
              case 2LL:
                v16 = 6LL;
                goto LABEL_31;
              case 4LL:
                memcpy(v35, v36, sizeof(v35));
                just::subcommand::Subcommand::dump(v30, *(unsigned __int8 *)(a3 + 409), v35);
                goto LABEL_28;
              case 6LL:
                v16 = 4LL;
LABEL_31:
                just::justfile::Justfile::run((__int64)v35, v36, a3, (__int64)v31, &a2[v16], 8LL, 0LL);
                goto LABEL_39;
              case 7LL:
                memcpy(v35, v36, sizeof(v35));
                just::subcommand::Subcommand::format(v30, a3, v31, v35);
LABEL_28:
                v17 = v30[0];
                if ( v30[0] == 56 )
                {
                  *(_BYTE *)a1 = 56;
                }
                else
                {
                  *(_QWORD *)(a1 + 96) = *(_QWORD *)&v30[96];
                  *(_OWORD *)(a1 + 81) = *(_OWORD *)&v30[81];
                  *(_OWORD *)(a1 + 65) = *(_OWORD *)&v30[65];
                  v18 = *(_OWORD *)&v30[1];
                  v19 = *(_OWORD *)&v30[17];
                  v20 = *(_OWORD *)&v30[33];
                  *(_OWORD *)(a1 + 49) = *(_OWORD *)&v30[49];
                  *(_OWORD *)(a1 + 33) = v20;
                  *(_OWORD *)(a1 + 17) = v19;
                  *(_OWORD *)(a1 + 1) = v18;
                  *(_BYTE *)a1 = v17;
                }
                break;
              case 8LL:
                just::subcommand::Subcommand::groups(a3, v36);
                goto LABEL_40;
              case 10LL:
                just::subcommand::Subcommand::list(v35, a3, v36, a2 + 1);
                goto LABEL_39;
              case 13LL:
                v34[2] = *(_OWORD *)&v31[32];
                v34[1] = *(_OWORD *)&v31[16];
                v34[0] = *(_OWORD *)v31;
                memcpy(v35, v36, sizeof(v35));
                just::subcommand::Subcommand::run(
                  (unsigned int)v30,
                  a3,
                  a4,
                  (unsigned int)v34,
                  (unsigned int)v35,
                  a2[2],
                  a2[3],
                  (__int64)(a2 + 4));
                v15 = v30[0];
                if ( v30[0] == 56 )
                {
                  *(_BYTE *)a1 = 56;
                }
                else
                {
                  *(_QWORD *)(a1 + 96) = *(_QWORD *)&v30[96];
                  *(_OWORD *)(a1 + 81) = *(_OWORD *)&v30[81];
                  *(_OWORD *)(a1 + 65) = *(_OWORD *)&v30[65];
                  v21 = *(_OWORD *)&v30[1];
                  v22 = *(_OWORD *)&v30[17];
                  v23 = *(_OWORD *)&v30[33];
                  *(_OWORD *)(a1 + 49) = *(_OWORD *)&v30[49];
                  *(_OWORD *)(a1 + 33) = v23;
                  *(_OWORD *)(a1 + 17) = v22;
                  *(_OWORD *)(a1 + 1) = v21;
                  *(_BYTE *)a1 = v15;
                }
                return a1;
              case 14LL:
                just::subcommand::Subcommand::show(v35, a3, v36, a2 + 1);
LABEL_39:
                v24 = v35[0];
                if ( LOBYTE(v35[0]) == 56 )
                  goto LABEL_40;
                *(_QWORD *)(a1 + 96) = *(_QWORD *)&v35[6];
                *(_OWORD *)(a1 + 81) = *(_OWORD *)((char *)&v35[5] + 1);
                *(_OWORD *)(a1 + 65) = *(_OWORD *)((char *)&v35[4] + 1);
                v25 = *(_OWORD *)((char *)v35 + 1);
                v26 = *(_OWORD *)((char *)&v35[1] + 1);
                v27 = *(_OWORD *)((char *)&v35[2] + 1);
                *(_OWORD *)(a1 + 49) = *(_OWORD *)((char *)&v35[3] + 1);
                *(_OWORD *)(a1 + 33) = v27;
                *(_OWORD *)(a1 + 17) = v26;
                *(_OWORD *)(a1 + 1) = v25;
                *(_BYTE *)a1 = v24;
                core::ptr::drop_in_place<just::compilation::Compilation>(v36);
                break;
              case 15LL:
                just::subcommand::Subcommand::summary(
                  *(unsigned __int8 *)(a3 + 419),
                  *(unsigned __int8 *)(a3 + 423),
                  v36);
                goto LABEL_40;
              case 16LL:
                just::subcommand::Subcommand::variables(v36);
LABEL_40:
                *(_BYTE *)a1 = 56;
                core::ptr::drop_in_place<just::compilation::Compilation>(v36);
                break;
            }
          }
        }
        core::ptr::drop_in_place<just::search::Search>(v31);
      }
      break;
  }
  return a1;
}