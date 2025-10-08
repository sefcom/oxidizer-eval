__int64 __fastcall uu_tail::follow::files::FileHandling::tail_file(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 mut; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-148h] BYREF
  __int64 v25; // [rsp+8h] [rbp-140h]
  __int128 v26; // [rsp+10h] [rbp-138h]
  __int64 v27; // [rsp+20h] [rbp-128h]
  __int64 v28; // [rsp+28h] [rbp-120h]
  _BYTE v29[40]; // [rsp+30h] [rbp-118h] BYREF
  __int128 v30; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-E0h]
  _QWORD v32[27]; // [rsp+70h] [rbp-D8h] BYREF

  v27 = -1LL;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 8LL;
  v26 = 0LL;
  mut = uu_tail::follow::files::FileHandling::get_mut((__int64)a2);
  v11 = *(_QWORD *)(mut + 200);
  if ( !v11 )
    goto LABEL_11;
  v12 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))uu_tail::chunks::BytesChunkBuffer::fill)(
          &v24,
          v11,
          *(_QWORD *)(mut + 208));
  if ( v12 )
  {
    *a1 = v12;
    a1[1] = v13;
    return core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(&v24);
  }
  if ( !*((_QWORD *)&v26 + 1) )
  {
LABEL_11:
    *((_BYTE *)a1 + 8) = 0;
    *a1 = 0LL;
    return core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(&v24);
  }
  if ( (unsigned __int8)uu_tail::follow::files::FileHandling::needs_header(a2, a3, a4, a5, v14, v15, v24, v25, v26) )
  {
    v16 = uu_tail::follow::files::FileHandling::get((__int64)a2);
    <alloc::string::String as core::clone::Clone>::clone(v32, v16 + 176);
    uu_tail::paths::HeaderPrinter::print(a2 + 9, v32[1], v32[2]);
    core::ptr::drop_in_place<alloc::string::String>(v32);
  }
  v32[0] = std::io::stdio::stdout();
  v17 = std::io::stdio::Stdout::lock(v32);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v29, v17);
  v18 = uu_tail::chunks::BytesChunkBuffer::print((__int64)&v24, (__int64)v29);
  if ( !v18 )
  {
    v20 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v29);
    if ( !v20 )
    {
      std::path::Path::to_path_buf(&v30, a3, a4);
      v22 = *a2;
      v23 = a2[1];
      a2[2] = v31;
      *(_OWORD *)a2 = v30;
      core::ptr::drop_in_place<uu_tail::paths::InputKind>(v22, v23);
      v32[0] = 2LL;
      uu_tail::follow::files::FileHandling::update_metadata((__int64)a2, a3, a4, v32);
      *((_BYTE *)a1 + 8) = 1;
      *a1 = 0LL;
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v29);
      return core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(&v24);
    }
    v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
  }
  *a1 = v18;
  a1[1] = v19;
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v29);
  return core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(&v24);
}