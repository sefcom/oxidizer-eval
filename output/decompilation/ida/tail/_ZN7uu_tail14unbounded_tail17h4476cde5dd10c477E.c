__int64 __fastcall uu_tail::unbounded_tail(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r15
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // r12
  char v15; // al
  const void *buffer_with; // rax
  size_t v17; // rdx
  size_t v18; // r14
  __int64 v19; // r15
  _QWORD v20[2]; // [rsp+0h] [rbp-2088h] BYREF
  __int64 v21; // [rsp+10h] [rbp-2078h]
  char v22[8]; // [rsp+28h] [rbp-2060h] BYREF
  __int64 v23; // [rsp+30h] [rbp-2058h]
  unsigned __int64 v24; // [rsp+38h] [rbp-2050h]
  _OWORD s[513]; // [rsp+40h] [rbp-2048h] BYREF
  char v26; // [rsp+2050h] [rbp-38h]

  *((_QWORD *)&s[257] + 1) = 0LL;
  *((_QWORD *)&s[1] + 1) = 0LL;
  *(_QWORD *)&s[0] = std::io::stdio::stdout();
  v2 = std::io::stdio::Stdout::lock(s);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v20, v2);
  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      v3 = *(_QWORD *)(a2 + 8);
      LOBYTE(s[3]) = *(_BYTE *)(a2 + 16);
      *((_QWORD *)&s[2] + 1) = v3;
      *(_QWORD *)&s[0] = 0LL;
      *((_QWORD *)&s[0] + 1) = 8LL;
      memset(&s[1], 0, 24);
      v4 = uu_tail::chunks::LinesChunkBuffer::fill((__int64)s);
      if ( !v4 )
      {
        v4 = uu_tail::chunks::LinesChunkBuffer::print((__int64)s, (__int64)v20);
        if ( !v4 )
        {
          core::ptr::drop_in_place<uu_tail::chunks::LinesChunkBuffer>(s);
          goto LABEL_26;
        }
      }
      core::ptr::drop_in_place<uu_tail::chunks::LinesChunkBuffer>(s);
      goto LABEL_31;
    case 1LL:
      v5 = *(_QWORD *)(a2 + 8);
      if ( v5 == 1 )
        goto LABEL_10;
      v7 = v5 - 1;
      v8 = *(_BYTE *)(a2 + 16);
      memset(s, 0, sizeof(s));
      v26 = v8;
      while ( 2 )
      {
        uu_tail::chunks::LinesChunk::fill((__int64)v22, (__int64)s);
        v4 = v23;
        if ( (v22[0] & 1) == 0 )
        {
          if ( v23 == 1 && v7 > *((_QWORD *)&s[512] + 1) )
          {
            v7 -= *((_QWORD *)&s[512] + 1);
            continue;
          }
          if ( !*(_QWORD *)&s[512] )
            goto LABEL_26;
          v9 = uu_tail::chunks::LinesChunk::calculate_bytes_offset_from((__int64)s, v7);
          v4 = uu_tail::chunks::LinesChunk::print_bytes((__int64)s, (__int64)v20, v9);
          if ( !v4 )
          {
            if ( (<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                    a1,
                    v20) & 1) == 0 )
              goto LABEL_26;
            goto LABEL_41;
          }
        }
        goto LABEL_31;
      }
    case 2LL:
LABEL_10:
      if ( (<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(a1, v20) & 1) == 0 )
        goto LABEL_26;
      goto LABEL_41;
    case 3LL:
      goto LABEL_26;
    case 4LL:
      switch ( *(_QWORD *)(a2 + 8) )
      {
        case 0LL:
          s[2] = *(unsigned __int64 *)(a2 + 16);
          *(_QWORD *)&s[0] = 0LL;
          *((_QWORD *)&s[0] + 1) = 8LL;
          s[1] = 0LL;
          v4 = uu_tail::chunks::BytesChunkBuffer::fill(s, a1);
          if ( v4 || (v4 = uu_tail::chunks::BytesChunkBuffer::print((__int64)s, (__int64)v20)) != 0 )
          {
            core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(s);
            goto LABEL_31;
          }
          core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(s);
          goto LABEL_26;
        case 1LL:
          v10 = *(_QWORD *)(a2 + 16);
          if ( v10 == 1 )
            goto LABEL_22;
          v14 = v10 - 1;
          memset(s, 0, 0x2008uLL);
          break;
        case 2LL:
LABEL_22:
          if ( (<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                  a1,
                  v20) & 1) != 0 )
            JUMPOUT(0xA7C8DLL);
          goto LABEL_26;
        case 3LL:
          goto LABEL_26;
      }
      return result;
  }
  while ( 1 )
  {
    uu_tail::chunks::BytesChunk::fill(v22);
    v4 = v23;
    if ( (v22[0] & 1) != 0 )
      goto LABEL_31;
    if ( (v23 & 1) == 0 )
    {
      v4 = 0LL;
      goto LABEL_31;
    }
    v15 = (v24 > v14) - (v24 < v14);
    if ( v15 != -1 )
      break;
    v14 -= v24;
  }
  if ( !v15 )
    goto LABEL_40;
  buffer_with = (const void *)uu_tail::chunks::BytesChunk::get_buffer_with((__int64)s, v14);
  v18 = v17;
  v19 = v21;
  if ( v17 < v20[0] - v21 )
  {
    memcpy((void *)(v21 + v20[1]), buffer_with, v17);
    v21 = v18 + v19;
    goto LABEL_40;
  }
  v11 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v20, buffer_with, v17);
  if ( v11 )
  {
LABEL_27:
    v12 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
LABEL_28:
    v4 = v12;
    goto LABEL_31;
  }
LABEL_40:
  if ( (<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(a1, v20) & 1) != 0 )
  {
LABEL_41:
    v12 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    goto LABEL_28;
  }
LABEL_26:
  v11 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v20);
  if ( v11 )
    goto LABEL_27;
  v4 = 0LL;
LABEL_31:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v20);
  return v4;
}