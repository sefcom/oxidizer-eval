__int64 __fastcall uu_wc::word_count_from_reader_specialized(__int64 a1)
{
  __int64 v1; // rdx
  __int128 v2; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v6; // [rsp+10h] [rbp-A8h]
  __int64 v7; // [rsp+20h] [rbp-98h]
  __int64 v8; // [rsp+30h] [rbp-88h] BYREF
  __int64 v9; // [rsp+38h] [rbp-80h] BYREF
  __int64 v10; // [rsp+40h] [rbp-78h]
  __int64 v11; // [rsp+48h] [rbp-70h]
  _BYTE v12[48]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v13; // [rsp+80h] [rbp-38h]
  int v14; // [rsp+88h] [rbp-30h]
  char v15; // [rsp+8Ch] [rbp-2Ch]

  v6 = 0LL;
  v5 = 0LL;
  v7 = 0LL;
  <std::fs::File as uu_wc::countable::WordCountable>::buffered(v12);
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v8 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v9, (__int64)v12);
      if ( v9 == 2 )
      {
        core::ptr::drop_in_place<core::option::Option<core::result::Result<&str,uu_wc::utf8::read::BufReadDecoderError>>>(&v9);
        *(_QWORD *)(a1 + 32) = v7;
        v2 = v5;
        *(_OWORD *)(a1 + 16) = v6;
        *(_OWORD *)a1 = v2;
        *(_QWORD *)(a1 + 40) = 0LL;
        return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::buffered::bufreader::BufReader<std::fs::File>>>(v12);
      }
      v1 = v11;
      if ( (v9 & 1) != 0 )
        break;
      uu_wc::process_chunk(&v5, v10, v11, &v8);
    }
    if ( v10 )
    {
      *(_QWORD *)&v5 = v11 + v5;
      goto LABEL_8;
    }
    if ( v11 )
      break;
LABEL_8:
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0LL, v10, v11);
  }
  *(_QWORD *)(a1 + 32) = v7;
  v4 = v5;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 40) = v1;
  return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::buffered::bufreader::BufReader<std::fs::File>>>(v12);
}