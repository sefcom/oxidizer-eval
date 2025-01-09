__int64 __fastcall uu_wc::word_count_from_reader_specialized(__int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rdx
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  char v6; // [rsp+Fh] [rbp-A9h] BYREF
  __int128 v7; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+30h] [rbp-88h]
  __int64 v10; // [rsp+38h] [rbp-80h] BYREF
  _BYTE *v11; // [rsp+40h] [rbp-78h]
  __int64 v12; // [rsp+48h] [rbp-70h]
  _BYTE v13[48]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v14; // [rsp+80h] [rbp-38h]
  int v15; // [rsp+88h] [rbp-30h]
  char v16; // [rsp+8Ch] [rbp-2Ch]

  v8 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  <std::fs::File as uu_wc::countable::WordCountable>::buffered(v13);
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v6 = 0;
  while ( 1 )
  {
    v1 = v13;
    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v10, (__int64)v13);
    if ( v10 == 2 )
      break;
    v1 = v11;
    v2 = v12;
    if ( v10 )
    {
      if ( v11 )
      {
        *(_QWORD *)&v7 = v12 + v7;
      }
      else if ( v12 )
      {
        *(_QWORD *)(a1 + 32) = v9;
        v3 = v7;
        *(_OWORD *)(a1 + 16) = v8;
        *(_OWORD *)a1 = v3;
        *(_QWORD *)(a1 + 40) = v2;
        return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::buffered::bufreader::BufReader<std::fs::File>>>(
                 v13,
                 v1);
      }
    }
    else
    {
      uu_wc::process_chunk(&v7, (__int64)v11, v12, &v6);
    }
  }
  core::ptr::drop_in_place<core::option::Option<core::result::Result<&str,uu_wc::utf8::read::BufReadDecoderError>>>(&v10);
  *(_QWORD *)(a1 + 32) = v9;
  v4 = v7;
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 40) = 0LL;
  return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::buffered::bufreader::BufReader<std::fs::File>>>(
           v13,
           v1);
}
