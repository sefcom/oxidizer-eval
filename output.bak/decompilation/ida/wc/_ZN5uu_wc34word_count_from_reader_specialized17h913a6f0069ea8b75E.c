__int64 __fastcall uu_wc::word_count_from_reader_specialized(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // dl
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int64 v8; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-90h]
  __int64 v10; // [rsp+10h] [rbp-88h]
  int v11; // [rsp+18h] [rbp-80h]
  char v12; // [rsp+1Ch] [rbp-7Ch]
  __int128 v13; // [rsp+20h] [rbp-78h] BYREF
  __int128 v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+40h] [rbp-58h]
  unsigned __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]
  __int64 v19; // [rsp+68h] [rbp-30h]

  v14 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v8 = <std::io::stdio::StdinLock as uu_wc::countable::WordCountable>::buffered(a2, a3);
  LOBYTE(v9) = v3 & 1;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v16 = 0LL;
  while ( 1 )
  {
    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v17, (__int64)&v8);
    if ( v17 == 2 )
      break;
    v4 = v19;
    if ( v17 )
    {
      if ( v18 )
      {
        *(_QWORD *)&v13 = v19 + v13;
      }
      else if ( v19 )
      {
        *(_QWORD *)(a1 + 32) = v15;
        v5 = v13;
        *(_OWORD *)(a1 + 16) = v14;
        *(_OWORD *)a1 = v5;
        *(_QWORD *)(a1 + 40) = v4;
        return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::stdio::StdinLock>>(v8, v9);
      }
    }
    else
    {
      uu_wc::process_chunk(&v13, v18, v19, &v16);
    }
  }
  core::ptr::drop_in_place<core::option::Option<core::result::Result<&str,uu_wc::utf8::read::BufReadDecoderError>>>(&v17);
  *(_QWORD *)(a1 + 32) = v15;
  v6 = v13;
  *(_OWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v6;
  *(_QWORD *)(a1 + 40) = 0LL;
  return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::stdio::StdinLock>>(v8, v9);
}
