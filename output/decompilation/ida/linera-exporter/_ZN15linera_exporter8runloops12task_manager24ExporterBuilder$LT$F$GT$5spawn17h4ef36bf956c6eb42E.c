__int64 __fastcall linera_exporter::runloops::task_manager::ExporterBuilder<F>::spawn(
        __int128 *a1,
        __int64 a2,
        const void *a3)
{
  char v4; // al
  volatile signed __int64 *v5; // rcx
  __int64 v6; // rt0
  char v7; // of
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // ebp
  __int64 v12; // r15
  __int64 v13; // r14
  __int128 v15; // [rsp+0h] [rbp-D08h]
  __int128 v16; // [rsp+10h] [rbp-CF8h]
  __int128 v17; // [rsp+20h] [rbp-CE8h]
  __int128 v18; // [rsp+20h] [rbp-CE8h]
  __int128 v19; // [rsp+30h] [rbp-CD8h]
  __int128 v20; // [rsp+40h] [rbp-CC8h]
  __int128 v21; // [rsp+50h] [rbp-CB8h]
  __int128 v22; // [rsp+60h] [rbp-CA8h]
  __int64 v23; // [rsp+70h] [rbp-C98h]
  _BYTE src[264]; // [rsp+80h] [rbp-C88h] BYREF
  __int64 v25; // [rsp+188h] [rbp-B80h]
  int v26; // [rsp+498h] [rbp-870h]
  char v27; // [rsp+49Ch] [rbp-86Ch]
  char v28; // [rsp+538h] [rbp-7D0h]
  char v29; // [rsp+CD8h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 24) == 1 )
    {
      <alloc::string::String as core::clone::Clone>::clone(src, a2);
      v4 = *(_BYTE *)(a2 + 24);
      v23 = *(_QWORD *)&src[16];
      v22 = *(_OWORD *)src;
      v5 = (volatile signed __int64 *)*((_QWORD *)a1 + 7);
      v6 = _InterlockedIncrement64(v5);
      if ( (v6 < 0) ^ v7 | (v6 == 0) )
        BUG();
      *(_QWORD *)&v16 = v23;
      BYTE8(v16) = v4;
      *(_QWORD *)&v17 = v5;
      *((_QWORD *)&v17 + 1) = *((_QWORD *)a1 + 9);
      v8 = <linera_exporter::common::ExporterCancellationSignal as core::clone::Clone>::clone(a1 + 4);
      memcpy(&src[48], a3, 0xA8uLL);
      *(_OWORD *)src = v22;
      *(_OWORD *)&src[16] = v16;
      *(_OWORD *)&src[32] = v17;
      *(_QWORD *)&src[216] = v8;
      v29 = 0;
      v9 = tokio::task::spawn::spawn(src);
    }
    else
    {
      v11 = linera_exporter::runloops::logging_exporter::LoggingExporter::new(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      v12 = <linera_exporter::common::ExporterCancellationSignal as core::clone::Clone>::clone(a1 + 4);
      memcpy(src, a3, 0xA8uLL);
      v26 = v11;
      *(_QWORD *)&src[168] = v12;
      v27 = 0;
      v9 = tokio::task::spawn::spawn(src);
    }
  }
  else
  {
    <alloc::string::String as core::clone::Clone>::clone(src, a2);
    *(_QWORD *)&v16 = *(_QWORD *)&src[16];
    v15 = *(_OWORD *)src;
    BYTE8(v16) = *(_BYTE *)(a2 + 24);
    v18 = *a1;
    v19 = a1[1];
    v20 = a1[2];
    *(_QWORD *)&v21 = *((_QWORD *)a1 + 6);
    *((_QWORD *)&v21 + 1) = *((_QWORD *)a1 + 9);
    v10 = <linera_exporter::common::ExporterCancellationSignal as core::clone::Clone>::clone(a1 + 4);
    memcpy(&src[96], a3, 0xA8uLL);
    *(_OWORD *)src = v15;
    *(_OWORD *)&src[16] = v16;
    *(_OWORD *)&src[32] = v18;
    *(_OWORD *)&src[48] = v19;
    *(_OWORD *)&src[64] = v20;
    *(_OWORD *)&src[80] = v21;
    v25 = v10;
    v28 = 0;
    v9 = tokio::task::spawn::spawn(src);
  }
  v13 = v9;
  core::ptr::drop_in_place<linera_service::config::DestinationId>(a2);
  return v13;
}