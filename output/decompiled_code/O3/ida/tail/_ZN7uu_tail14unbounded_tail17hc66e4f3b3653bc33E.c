__int64 __fastcall uu_tail::unbounded_tail(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 v13; // r12
  char v14; // al
  const void *buffer_with; // rax
  size_t v16; // rdx
  __int64 v17; // r15
  size_t v18; // r14
  __int64 v19; // rax
  _QWORD v20[2]; // [rsp+8h] [rbp-2090h] BYREF
  __int64 v21; // [rsp+18h] [rbp-2080h]
  __int64 v22; // [rsp+30h] [rbp-2068h] BYREF
  __int64 v23; // [rsp+38h] [rbp-2060h]
  unsigned __int64 v24; // [rsp+40h] [rbp-2058h]
  __int64 v25; // [rsp+48h] [rbp-2050h] BYREF
  _OWORD s[513]; // [rsp+50h] [rbp-2048h] BYREF
  char v27; // [rsp+2060h] [rbp-38h]

  *((_QWORD *)&s[257] + 1) = 0LL;
  *((_QWORD *)&s[1] + 1) = 0LL;
  v25 = std::io::stdio::stdout();
  v2 = std::io::stdio::Stdout::lock(&v25);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v20, 0x2000LL, v2);
  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      v3 = *(_QWORD *)(a2 + 8);
      LOBYTE(s[3]) = *(_BYTE *)(a2 + 16);
      *((_QWORD *)&s[2] + 1) = v3;
      *(_QWORD *)&s[0] = 0LL;
      *((_QWORD *)&s[0] + 1) = 8LL;
      memset(&s[1], 0, 24);
      v4 = uu_tail::chunks::LinesChunkBuffer::fill(s, a1);
      if ( v4 || (v4 = uu_tail::chunks::LinesChunkBuffer::print(s, v20)) != 0 )
      {
        core::ptr::drop_in_place<uu_tail::chunks::LinesChunkBuffer>(s);
        goto LABEL_13;
      }
      core::ptr::drop_in_place<uu_tail::chunks::LinesChunkBuffer>(s);
      goto LABEL_28;
    case 1LL:
      v5 = *(_QWORD *)(a2 + 8);
      if ( v5 == 1 )
        goto LABEL_10;
      v8 = v5 - 1;
      v9 = *(_BYTE *)(a2 + 16);
      memset(s, 0, sizeof(s));
      v27 = v9;
      while ( 2 )
      {
        uu_tail::chunks::LinesChunk::fill(&v22, s, a1);
        v4 = v23;
        if ( v22 )
          goto LABEL_13;
        if ( v23 == 1 && v8 > *((_QWORD *)&s[512] + 1) )
        {
          v8 -= *((_QWORD *)&s[512] + 1);
          continue;
        }
        break;
      }
      if ( !*(_QWORD *)&s[512] )
        goto LABEL_28;
      v10 = uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(s, v8);
      v4 = uu_tail::chunks::LinesChunk::print_bytes(s, v20, v10);
      if ( v4 )
        goto LABEL_13;
      if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(a1, v20) )
        goto LABEL_11;
      goto LABEL_28;
    case 2LL:
LABEL_10:
      if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(a1, v20) )
        goto LABEL_11;
      goto LABEL_28;
    case 3LL:
      goto LABEL_28;
    case 4LL:
      switch ( *(_QWORD *)(a2 + 8) )
      {
        case 0LL:
          s[2] = *(unsigned __int64 *)(a2 + 16);
          *(_QWORD *)&s[0] = 0LL;
          *((_QWORD *)&s[0] + 1) = 8LL;
          s[1] = 0LL;
          v4 = uu_tail::chunks::BytesChunkBuffer::fill(s, a1);
          if ( v4 || (v4 = uu_tail::chunks::BytesChunkBuffer::print(s, v20)) != 0 )
          {
            core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(s);
            goto LABEL_13;
          }
          core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(s);
          goto LABEL_28;
        case 1LL:
          v11 = *(_QWORD *)(a2 + 16);
          if ( v11 == 1 )
            goto LABEL_24;
          v13 = v11 - 1;
          memset(s, 0, 0x2008uLL);
          break;
        case 2LL:
LABEL_24:
          if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                 a1,
                 v20) )
          {
            goto LABEL_11;
          }
          goto LABEL_28;
        case 3LL:
          goto LABEL_28;
      }
      break;
  }
  while ( 1 )
  {
    uu_tail::chunks::BytesChunk::fill(&v22, s, a1);
    v4 = v23;
    if ( v22 )
      goto LABEL_13;
    if ( v23 != 1 )
    {
      v4 = 0LL;
      goto LABEL_13;
    }
    v14 = v13 != v24;
    if ( v13 > v24 )
      v14 = -1;
    if ( v14 != -1 )
      break;
    v13 -= v24;
  }
  if ( !v14 )
    goto LABEL_44;
  buffer_with = (const void *)uu_tail::chunks::BytesChunk::get_buffer_with(s, v13, 255LL, v13 - v24);
  v17 = v21;
  if ( v16 < v20[0] - v21 )
  {
    v18 = v16;
    memcpy((void *)(v21 + v20[1]), buffer_with, v16);
    v21 = v18 + v17;
    goto LABEL_44;
  }
  v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v20, buffer_with);
  if ( v19 )
  {
    v7 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
LABEL_12:
    v4 = v7;
LABEL_13:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v20);
    return v4;
  }
LABEL_44:
  if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(a1, v20) )
  {
LABEL_11:
    v7 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    goto LABEL_12;
  }
LABEL_28:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v20);
  return 0LL;
}
