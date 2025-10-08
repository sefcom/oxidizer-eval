__int64 __fastcall linera_server::make_server_config(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int16 v6; // r12
  __int16 v7; // r13
  __int16 v8; // r15
  __int64 v9; // r15
  __int128 v10; // xmm0
  __int128 v12; // [rsp+10h] [rbp-6C8h]
  __int128 v13; // [rsp+20h] [rbp-6B8h]
  __int128 v14; // [rsp+30h] [rbp-6A8h]
  __int128 v15; // [rsp+40h] [rbp-698h]
  __int128 v16; // [rsp+50h] [rbp-688h]
  __int128 v17; // [rsp+60h] [rbp-678h]
  __int128 v18; // [rsp+70h] [rbp-668h]
  __int64 v19; // [rsp+80h] [rbp-658h]
  __int128 v20; // [rsp+88h] [rbp-650h]
  __int128 v21; // [rsp+98h] [rbp-640h]
  __int128 v22; // [rsp+A8h] [rbp-630h]
  __int128 v23; // [rsp+B8h] [rbp-620h]
  __int128 v24; // [rsp+C8h] [rbp-610h]
  __int64 v25; // [rsp+D8h] [rbp-600h]
  _OWORD v26[10]; // [rsp+E0h] [rbp-5F8h] BYREF
  __int128 v27; // [rsp+180h] [rbp-558h]
  __int128 v28; // [rsp+190h] [rbp-548h]
  _BYTE v29[96]; // [rsp+1A0h] [rbp-538h] BYREF
  __int128 v30; // [rsp+200h] [rbp-4D8h]
  __int128 v31; // [rsp+210h] [rbp-4C8h]
  __int128 v32; // [rsp+220h] [rbp-4B8h]
  __int128 v33; // [rsp+230h] [rbp-4A8h]
  __int128 v34; // [rsp+240h] [rbp-498h]
  __int64 v35; // [rsp+250h] [rbp-488h]
  _BYTE v36[160]; // [rsp+258h] [rbp-480h] BYREF
  __int16 v37; // [rsp+2F8h] [rbp-3E0h]
  __int128 v38; // [rsp+300h] [rbp-3D8h]
  __int128 v39; // [rsp+310h] [rbp-3C8h]
  __int128 v40; // [rsp+320h] [rbp-3B8h]
  __int128 v41; // [rsp+330h] [rbp-3A8h]
  __int128 v42; // [rsp+340h] [rbp-398h]
  __int128 v43; // [rsp+350h] [rbp-388h]
  __int128 v44; // [rsp+360h] [rbp-378h]
  __int64 v45; // [rsp+370h] [rbp-368h]
  _OWORD src[36]; // [rsp+380h] [rbp-358h] BYREF
  __int64 v47; // [rsp+5C0h] [rbp-118h] BYREF
  _BYTE dest[224]; // [rsp+5C8h] [rbp-110h] BYREF

  ecdsa::signing::SigningKey<C>::random(src, a4);
  v19 = *(_QWORD *)&src[7];
  v18 = src[6];
  v17 = src[5];
  v16 = src[4];
  v15 = src[3];
  v14 = src[2];
  v13 = src[1];
  v12 = src[0];
  v20 = src[2];
  v21 = src[3];
  v22 = src[4];
  v23 = src[5];
  v24 = src[6];
  v25 = *(_QWORD *)&src[7];
  ed25519_dalek::signing::SigningKey::generate(src);
  memcpy(dest, src, sizeof(dest));
  v47 = 0LL;
  v6 = *(_WORD *)(a5 + 120);
  *(_QWORD *)&v28 = *(_QWORD *)(a5 + 40);
  v27 = *(_OWORD *)(a5 + 24);
  v7 = *(_WORD *)(a5 + 124);
  v8 = *(_WORD *)(a5 + 122);
  *(_QWORD *)&v26[1] = *(_QWORD *)(a5 + 88);
  v26[0] = *(_OWORD *)(a5 + 72);
  *((_QWORD *)&v26[2] + 1) = *(_QWORD *)(a5 + 64);
  *(_OWORD *)((char *)&v26[1] + 8) = *(_OWORD *)(a5 + 48);
  *(_QWORD *)&v26[4] = *(_QWORD *)(a5 + 112);
  v26[3] = *(_OWORD *)(a5 + 96);
  *(_OWORD *)((char *)&v26[4] + 8) = v20;
  *(_OWORD *)((char *)&v26[5] + 8) = v21;
  *(_OWORD *)((char *)&v26[6] + 8) = v22;
  *(_OWORD *)((char *)&v26[7] + 8) = v23;
  *(_OWORD *)((char *)&v26[8] + 8) = v24;
  *((_QWORD *)&v26[9] + 1) = v25;
  linera_base::crypto::AccountSecretKey::public(v29, &v47);
  v38 = v12;
  v39 = v13;
  v40 = v14;
  v41 = v15;
  v42 = v16;
  v43 = v17;
  v44 = v18;
  v45 = v19;
  WORD4(v28) = v6;
  WORD5(v28) = v7;
  v35 = v25;
  v34 = v24;
  v33 = v23;
  v32 = v22;
  v31 = v21;
  v30 = v20;
  memcpy(v36, v26, sizeof(v36));
  v37 = v8;
  linera_persistent::file::File<T>::new(src);
  v9 = *(_QWORD *)&src[0];
  v27 = *(_OWORD *)((char *)src + 8);
  v28 = *(_OWORD *)((char *)&src[1] + 8);
  if ( __OFSUB__(-*(_QWORD *)&src[0], 1LL) )
  {
    src[1] = v28;
    src[0] = v27;
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src, a2);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    memcpy((void *)(a1 + 40), (char *)&src[2] + 8, 0x210uLL);
    v10 = v27;
    *(_OWORD *)(a1 + 24) = v28;
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = v9;
  }
  core::ptr::drop_in_place<linera_base::crypto::AccountSecretKey>(&v47);
  return core::ptr::drop_in_place<std::path::PathBuf>(a5);
}