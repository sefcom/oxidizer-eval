__int64 __fastcall uu_tail::follow::files::FileHandling::tail_file(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 mut; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-158h] BYREF
  unsigned __int64 v15[2]; // [rsp+8h] [rbp-150h] BYREF
  __int128 v16; // [rsp+18h] [rbp-140h]
  __int64 v17; // [rsp+28h] [rbp-130h]
  __int64 v18; // [rsp+30h] [rbp-128h]
  __int128 v19; // [rsp+38h] [rbp-120h] BYREF
  __int64 v20; // [rsp+48h] [rbp-110h]
  __int128 v21; // [rsp+50h] [rbp-108h] BYREF
  __int64 v22; // [rsp+60h] [rbp-F8h]
  _BYTE v23[80]; // [rsp+108h] [rbp-50h] BYREF

  v17 = -1LL;
  v18 = 0LL;
  v15[0] = 0LL;
  v15[1] = 8LL;
  v16 = 0LL;
  mut = uu_tail::follow::files::FileHandling::get_mut(a2, a3, a4);
  if ( !*(_QWORD *)(mut + 200) )
    goto LABEL_9;
  v9 = uu_tail::chunks::BytesChunkBuffer::fill(v15, (__int64 *)(mut + 200));
  if ( !v9 )
  {
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( uu_tail::follow::files::FileHandling::needs_header((_QWORD *)a2, a3, a4, a5) )
      {
        v11 = uu_tail::follow::files::FileHandling::get(a2, a3, a4);
        <alloc::string::String as core::clone::Clone>::clone(&v21, v11 + 176);
        uu_tail::paths::HeaderPrinter::print((_BYTE *)(a2 + 72), *((__int64 *)&v21 + 1), v22);
        core::ptr::drop_in_place<alloc::string::String>(&v21);
      }
      v14 = std::io::stdio::stdout();
      v12 = std::io::stdio::Stdout::lock(&v14);
      std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v23, 0x2000LL, v12);
      v9 = uu_tail::chunks::BytesChunkBuffer::print((__int64)v15, (__int64)v23);
      if ( v9 )
        goto LABEL_3;
      std::path::Path::to_path_buf(&v19, a3, a4);
      v22 = *(_QWORD *)(a2 + 16);
      v21 = *(_OWORD *)a2;
      *(_OWORD *)a2 = v19;
      *(_QWORD *)(a2 + 16) = v20;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v21);
      *(_QWORD *)&v21 = 2LL;
      uu_tail::follow::files::FileHandling::update_metadata(a2, a3, a4, (__int64 *)&v21);
      *(_BYTE *)(a1 + 8) = 1;
LABEL_10:
      *(_QWORD *)a1 = 0LL;
      goto LABEL_11;
    }
LABEL_9:
    *(_BYTE *)(a1 + 8) = 0;
    goto LABEL_10;
  }
LABEL_3:
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v10;
LABEL_11:
  core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(v15);
  return a1;
}
