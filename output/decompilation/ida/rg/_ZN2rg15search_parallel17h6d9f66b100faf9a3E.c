__int64 __fastcall rg::search_parallel(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r14
  unsigned int v5; // edx
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rdx
  char *v13; // rcx
  __int64 v14; // r14
  char v15; // dl
  unsigned __int8 v16; // r12
  int v17; // ecx
  char v19; // [rsp+9h] [rbp-8DFh] BYREF
  char v20; // [rsp+Ah] [rbp-8DEh] BYREF
  char v21; // [rsp+Bh] [rbp-8DDh] BYREF
  unsigned int v22; // [rsp+Ch] [rbp-8DCh]
  __int64 v23; // [rsp+10h] [rbp-8D8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-8D0h]
  __int64 v25; // [rsp+20h] [rbp-8C8h] BYREF
  int v26; // [rsp+28h] [rbp-8C0h] BYREF
  char v27; // [rsp+2Ch] [rbp-8BCh]
  __int128 v28; // [rsp+2Dh] [rbp-8BBh]
  __int128 v29; // [rsp+3Dh] [rbp-8ABh]
  _BYTE v30[19]; // [rsp+4Dh] [rbp-89Bh]
  __int64 v31; // [rsp+60h] [rbp-888h]
  int v32; // [rsp+68h] [rbp-880h]
  int v33; // [rsp+6Ch] [rbp-87Ch]
  char *v34; // [rsp+70h] [rbp-878h] BYREF
  __int128 v35; // [rsp+78h] [rbp-870h]
  __int128 v36; // [rsp+88h] [rbp-860h]
  __int128 v37; // [rsp+98h] [rbp-850h]
  __int128 v38; // [rsp+A8h] [rbp-840h]
  _BYTE v39[27]; // [rsp+B8h] [rbp-830h]
  char v40; // [rsp+D3h] [rbp-815h]
  int v41; // [rsp+D4h] [rbp-814h]
  _OWORD v42[5]; // [rsp+E0h] [rbp-808h] BYREF
  _BYTE v43[32]; // [rsp+130h] [rbp-7B8h] BYREF
  char *v44; // [rsp+150h] [rbp-798h] BYREF
  __int64 v45; // [rsp+158h] [rbp-790h]
  _BYTE dest[248]; // [rsp+160h] [rbp-788h] BYREF
  _BYTE v47[816]; // [rsp+258h] [rbp-690h] BYREF
  char *v48; // [rsp+588h] [rbp-360h] BYREF
  _OWORD src[53]; // [rsp+590h] [rbp-358h] BYREF

  v23 = a2;
  v4 = std::time::Instant::now();
  v6 = v5;
  v21 = *(_BYTE *)(a2 + 360);
  rg::flags::hiargs::HiArgs::buffer_writer(v42, a2);
  v7 = *(_DWORD *)(a2 + 768);
  if ( v7 == 1000000000 )
  {
    v8 = 0LL;
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 772);
    v10 = *(_OWORD *)(a2 + 728);
    v11 = *(_OWORD *)(a2 + 744);
    *(_OWORD *)&v47[3] = *(_OWORD *)(a2 + 712);
    *(_OWORD *)&v47[19] = v10;
    *(_OWORD *)&v47[35] = v11;
    *(_QWORD *)&v47[51] = *(_QWORD *)(a2 + 760);
    v26 = 0;
    v27 = 0;
    v28 = *(_OWORD *)v47;
    v29 = *(_OWORD *)&v47[16];
    *(_OWORD *)v30 = *(_OWORD *)&v47[32];
    *(_QWORD *)&v30[11] = *((_QWORD *)&v11 + 1);
    v31 = *(_QWORD *)&v47[51];
    v32 = v7;
    v33 = v9;
    v8 = 1LL;
  }
  v25 = v8;
  v19 = 0;
  v20 = 0;
  rg::flags::hiargs::HiArgs::matcher((__int64)&v48, a2);
  v13 = v48;
  if ( BYTE11(src[5]) == 2 )
  {
    *(_QWORD *)(a1 + 8) = v48;
    *(_BYTE *)a1 = 1;
  }
  else
  {
    v24 = v4;
    *(_OWORD *)&v39[11] = *(_OWORD *)((char *)&src[4] + 11);
    *(_OWORD *)v39 = src[4];
    v38 = src[3];
    v37 = src[2];
    v36 = src[1];
    v35 = src[0];
    v34 = v48;
    v40 = BYTE11(src[5]);
    v41 = HIDWORD(src[5]);
    rg::flags::hiargs::HiArgs::searcher((__int64)&v48, a2);
    if ( v48 == (_BYTE *)&dword_0 + 2 )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)&src[0];
      *(_BYTE *)a1 = 1;
      core::ptr::drop_in_place<rg::search::PatternMatcher>(&v34);
    }
    else
    {
      memcpy(dest, (char *)src + 8, sizeof(dest));
      v44 = v48;
      v45 = *(_QWORD *)&src[0];
      termcolor::BufferWriter::buffer(v43, v42);
      rg::flags::hiargs::HiArgs::printer(&v48, a2, a3, v43);
      v22 = a3;
      rg::flags::hiargs::HiArgs::search_worker(v47, a2, (__int128 *)&v34, (__int64)&v44, &v48);
      if ( *(_QWORD *)v47 == 2LL )
      {
        *(_QWORD *)(a1 + 8) = *(_QWORD *)&v47[8];
        *(_BYTE *)a1 = 1;
      }
      else
      {
        memcpy((char *)src + 8, &v47[16], 0x320uLL);
        v48 = *(char **)v47;
        *(_QWORD *)&src[0] = *(_QWORD *)&v47[8];
        rg::flags::hiargs::HiArgs::walk_builder(v47, a2);
        if ( *(_QWORD *)v47 == 2LL )
        {
          *(_QWORD *)(a1 + 8) = *(_QWORD *)&v47[8];
          *(_BYTE *)a1 = 1;
        }
        else
        {
          memcpy(dest, &v47[16], 0xC8uLL);
          v44 = *(char **)v47;
          v45 = *(_QWORD *)&v47[8];
          ignore::walk::WalkBuilder::build_parallel(&v34, &v44);
          *(_QWORD *)v47 = v42;
          *(_QWORD *)&v47[8] = &v25;
          *(_QWORD *)&v47[16] = &v19;
          *(_QWORD *)&v47[24] = &v20;
          *(_QWORD *)&v47[32] = &v21;
          *(_QWORD *)&v47[40] = &v48;
          *(_QWORD *)&v47[48] = &v23;
          ignore::walk::WalkParallel::run(&v34, v47);
          core::ptr::drop_in_place<ignore::walk::WalkBuilder>(&v44);
          if ( *(_BYTE *)(v23 + 360) && !(unsigned __int8)core::sync::atomic::atomic_load(&v20, 4LL) )
            rg::eprint_nothing_searched();
          if ( (v25 & 1) != 0 )
          {
            std::sync::poison::mutex::Mutex<T>::lock(v47, &v26);
            v14 = core::result::Result<T,E>::unwrap(v47, &off_3EB970);
            v16 = v15 & 1;
            v17 = 0;
            if ( *(_QWORD *)&src[16] )
              v17 = LODWORD(src[16]) - 1;
            v44 = (char *)&v48 + off_887B0[v17];
            *(_QWORD *)v47 = rg::print_stats(v22, v14 + 8, v24, v6, &v44);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v47);
            *(_QWORD *)v47 = termcolor::BufferWriter::print(v42, v44);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v47);
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinRaw>>>(
              v14,
              v16);
          }
          a2 = 4LL;
          *(_BYTE *)(a1 + 1) = (unsigned __int8)core::sync::atomic::atomic_load(&v19, 4LL) != 0;
          *(_BYTE *)a1 = 0;
        }
        core::ptr::drop_in_place<rg::search::SearchWorker<termcolor::Buffer>>(&v48);
      }
    }
  }
  return core::ptr::drop_in_place<termcolor::BufferWriter>(v42, a2, v12, v13);
}