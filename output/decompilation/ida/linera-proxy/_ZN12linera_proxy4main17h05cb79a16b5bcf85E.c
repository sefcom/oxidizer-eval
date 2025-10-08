__int64 linera_proxy::main()
{
  char v0; // bp
  __int64 v1; // r14
  __int64 v2; // rbx
  _OWORD v4[5]; // [rsp+8h] [rbp-660h] BYREF
  _BYTE dest[216]; // [rsp+58h] [rbp-610h] BYREF
  _BYTE v6[8]; // [rsp+130h] [rbp-538h] BYREF
  __int64 v7; // [rsp+138h] [rbp-530h]
  int v8; // [rsp+140h] [rbp-528h]
  __int64 v9; // [rsp+148h] [rbp-520h]
  _OWORD src[33]; // [rsp+208h] [rbp-460h] BYREF
  char v11; // [rsp+418h] [rbp-250h]

  clap_builder::derive::Parser::parse(v6);
  v0 = v6[0];
  v1 = v7;
  if ( ((v7 == 1) & v6[0]) != 0 )
  {
    tokio::runtime::builder::Builder::new_current_thread(dest);
    if ( v8 != 1 )
      goto LABEL_8;
LABEL_7:
    tokio::runtime::builder::Builder::max_blocking_threads(dest, v9, &off_14A9730);
    goto LABEL_8;
  }
  tokio::runtime::builder::Builder::new_multi_thread(src);
  if ( (v0 & 1) != 0 )
    tokio::runtime::builder::Builder::worker_threads(src, v1, &off_14A9718);
  memcpy(dest, src, sizeof(dest));
  if ( v8 == 1 )
    goto LABEL_7;
LABEL_8:
  *(_WORD *)&dest[205] = 257;
  tokio::runtime::builder::Builder::build(src, dest);
  if ( *(_QWORD *)&src[0] == 2LL )
  {
    v2 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*((_QWORD *)&src[0] + 1));
    core::ptr::drop_in_place<tokio::runtime::builder::Builder>(dest);
    core::ptr::drop_in_place<linera_proxy::ProxyOptions>(v6);
  }
  else
  {
    v4[4] = src[4];
    v4[3] = src[3];
    v4[2] = src[2];
    v4[1] = src[1];
    v4[0] = src[0];
    *(_QWORD *)&src[0] = v6;
    v11 = 0;
    v2 = tokio::runtime::runtime::Runtime::block_on(v4, src);
    core::ptr::drop_in_place<tokio::runtime::builder::Builder>(dest);
    core::ptr::drop_in_place<linera_proxy::ProxyOptions>(v6);
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v4);
  }
  return v2;
}