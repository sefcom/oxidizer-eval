__int64 __fastcall alacritty::config::bindings::common_keybindings(__int64 a1)
{
  __int64 result; // rax
  _BYTE v2[24]; // [rsp+0h] [rbp-3C8h] BYREF
  __int128 v3; // [rsp+18h] [rbp-3B0h]
  __int64 v4; // [rsp+28h] [rbp-3A0h]
  _BYTE v5[24]; // [rsp+30h] [rbp-398h]
  __int64 v6; // [rsp+48h] [rbp-380h]
  char v7; // [rsp+50h] [rbp-378h]
  int v8; // [rsp+58h] [rbp-370h]
  __int16 v9; // [rsp+5Ch] [rbp-36Ch]
  __int128 v10; // [rsp+60h] [rbp-368h] BYREF
  __int64 v11; // [rsp+70h] [rbp-358h]
  __int128 v12; // [rsp+78h] [rbp-350h]
  __int128 v13; // [rsp+88h] [rbp-340h]
  __int64 v14; // [rsp+98h] [rbp-330h]
  _BYTE v15[22]; // [rsp+A0h] [rbp-328h]
  __int64 v16; // [rsp+B6h] [rbp-312h]
  _BYTE v17[22]; // [rsp+BEh] [rbp-30Ah]
  __int64 v18; // [rsp+D4h] [rbp-2F4h]
  _BYTE v19[22]; // [rsp+DCh] [rbp-2ECh]
  __int64 v20; // [rsp+F2h] [rbp-2D6h]
  _BYTE v21[22]; // [rsp+FAh] [rbp-2CEh]
  __int64 v22; // [rsp+110h] [rbp-2B8h]
  _BYTE v23[22]; // [rsp+118h] [rbp-2B0h]
  __int64 v24; // [rsp+12Eh] [rbp-29Ah]
  _BYTE v25[22]; // [rsp+136h] [rbp-292h]
  __int64 v26; // [rsp+14Ch] [rbp-27Ch]
  _BYTE v27[22]; // [rsp+154h] [rbp-274h]
  __int64 v28; // [rsp+16Ah] [rbp-25Eh]
  _BYTE v29[22]; // [rsp+172h] [rbp-256h]
  __int64 v30; // [rsp+188h] [rbp-240h]
  _BYTE v31[22]; // [rsp+190h] [rbp-238h]
  __int64 v32; // [rsp+1A6h] [rbp-222h]
  _BYTE v33[22]; // [rsp+1AEh] [rbp-21Ah]
  __int64 v34; // [rsp+1C4h] [rbp-204h]
  _BYTE v35[22]; // [rsp+1CCh] [rbp-1FCh]
  __int64 v36; // [rsp+1E2h] [rbp-1E6h]
  _BYTE v37[22]; // [rsp+1EAh] [rbp-1DEh]
  __int64 v38; // [rsp+200h] [rbp-1C8h]
  __int128 v39; // [rsp+208h] [rbp-1C0h]
  __int128 v40; // [rsp+218h] [rbp-1B0h]
  __int64 v41; // [rsp+228h] [rbp-1A0h]

  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 8LL;
  v11 = 0LL;
  smol_str::Repr::new(v2, &unk_101A75);
  *(_OWORD *)&v15[6] = *(_OWORD *)v2;
  v16 = *(_QWORD *)&v2[16];
  v8 = 36;
  *(_QWORD *)v2 = 0x8000000000000008LL;
  v9 = 2048;
  *(_WORD *)v5 = 1;
  *(_OWORD *)&v5[2] = *(_OWORD *)v15;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v15[14];
  v6 = *(_QWORD *)&v2[16];
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, &unk_101A75);
  *(_OWORD *)&v17[6] = *(_OWORD *)v2;
  v18 = *(_QWORD *)&v2[16];
  v8 = 36;
  *(_QWORD *)v2 = 0x8000000000000008LL;
  v9 = 24;
  *(_WORD *)v5 = 1;
  *(_OWORD *)&v5[2] = *(_OWORD *)v17;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v17[14];
  v6 = *(_QWORD *)&v2[16];
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, &unk_101A73);
  *(_OWORD *)&v19[6] = *(_OWORD *)v2;
  v20 = *(_QWORD *)&v2[16];
  v8 = 36;
  *(_QWORD *)v2 = 0x8000000000000032LL;
  v9 = 4096;
  *(_WORD *)v5 = 1;
  *(_OWORD *)&v5[2] = *(_OWORD *)v19;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v19[14];
  v6 = *(_QWORD *)&v2[16];
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, aB_3);
  *(_OWORD *)&v21[6] = *(_OWORD *)v2;
  v22 = *(_QWORD *)&v2[16];
  v8 = 36;
  *(_QWORD *)v2 = 0x8000000000000033LL;
  v9 = 4096;
  *(_WORD *)v5 = 1;
  *(_OWORD *)&v5[2] = *(_OWORD *)v21;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v21[14];
  v6 = *(_QWORD *)&v2[16];
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  v8 = 4;
  *(_QWORD *)v2 = 0x800000000000000BLL;
  v9 = 2048;
  *(_DWORD *)v5 = (_DWORD)&unk_210000;
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, aC_3);
  *(_OWORD *)&v23[6] = *(_OWORD *)v2;
  v24 = *(_QWORD *)&v2[16];
  v8 = 36;
  *(_QWORD *)v2 = 0x8000000000000009LL;
  v9 = 0;
  *(_WORD *)v5 = 1;
  *(_OWORD *)&v5[2] = *(_OWORD *)v23;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v23[14];
  v6 = *(_QWORD *)&v2[16];
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, aC_3);
  *(_OWORD *)&v25[6] = *(_OWORD *)v2;
  v26 = *(_QWORD *)&v2[16];
  v8 = 36;
  *(_QWORD *)v2 = 0x800000000000002FLL;
  v9 = 4104;
  *(_WORD *)v5 = 1;
  *(_OWORD *)&v5[2] = *(_OWORD *)v25;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v25[14];
  v6 = *(_QWORD *)&v2[16];
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, a0_2);
  *(_OWORD *)&v27[6] = *(_OWORD *)v2;
  v28 = *(_QWORD *)&v2[16];
  v8 = 32;
  *(_QWORD *)v2 = 0x800000000000000ELL;
  v9 = 0;
  *(_WORD *)v5 = 1;
  *(_OWORD *)&v5[2] = *(_OWORD *)v27;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v27[14];
  v6 = *(_QWORD *)&v2[16];
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, asc_FFF75);
  *(_OWORD *)&v29[6] = *(_OWORD *)v2;
  v30 = *(_QWORD *)&v2[16];
  v8 = 32;
  *(_QWORD *)v2 = 0x800000000000000CLL;
  *(_OWORD *)&v2[8] = v12;
  v3 = v13;
  v4 = v14;
  v9 = 0;
  *(_WORD *)v5 = 1;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v29[14];
  v6 = v30;
  *(_OWORD *)&v5[2] = *(_OWORD *)v29;
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, asc_101A83);
  *(_OWORD *)&v31[6] = *(_OWORD *)v2;
  v32 = *(_QWORD *)&v2[16];
  v8 = 32;
  *(_QWORD *)v2 = 0x800000000000000CLL;
  *(_OWORD *)&v2[8] = v12;
  v3 = v13;
  v4 = v14;
  v9 = 0;
  *(_WORD *)v5 = 1;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v31[14];
  v6 = v32;
  *(_OWORD *)&v5[2] = *(_OWORD *)v31;
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, asc_F76B5);
  *(_OWORD *)&v33[6] = *(_OWORD *)v2;
  v34 = *(_QWORD *)&v2[16];
  v8 = 32;
  *(_QWORD *)v2 = 0x800000000000000DLL;
  *(_OWORD *)&v2[8] = v39;
  v3 = v40;
  v4 = v41;
  v9 = 0;
  *(_WORD *)v5 = 1;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v33[14];
  v6 = v34;
  *(_OWORD *)&v5[2] = *(_OWORD *)v33;
  v7 = 2;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, asc_101A83);
  *(_OWORD *)&v35[6] = *(_OWORD *)v2;
  v36 = *(_QWORD *)&v2[16];
  v8 = 32;
  *(_QWORD *)v2 = 0x800000000000000CLL;
  *(_OWORD *)&v2[8] = v12;
  v3 = v13;
  v4 = v14;
  v9 = 0;
  *(_WORD *)v5 = 1;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v35[14];
  v6 = v36;
  *(_OWORD *)&v5[2] = *(_OWORD *)v35;
  v7 = 1;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  smol_str::Repr::new(v2, asc_F76B5);
  *(_OWORD *)&v37[6] = *(_OWORD *)v2;
  v38 = *(_QWORD *)&v2[16];
  v8 = 32;
  *(_QWORD *)v2 = 0x800000000000000DLL;
  *(_OWORD *)&v2[8] = v39;
  v3 = v40;
  v4 = v41;
  v9 = 0;
  *(_WORD *)v5 = 1;
  *(_QWORD *)&v5[16] = *(_QWORD *)&v37[14];
  v6 = v38;
  *(_OWORD *)&v5[2] = *(_OWORD *)v37;
  v7 = 1;
  alloc::vec::Vec<T,A>::push(&v10, v2, &off_881C60);
  result = v11;
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  return result;
}