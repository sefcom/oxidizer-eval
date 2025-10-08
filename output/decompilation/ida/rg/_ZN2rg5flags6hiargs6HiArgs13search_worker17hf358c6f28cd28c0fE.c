__int64 __fastcall rg::flags::hiargs::HiArgs::search_worker(
        _QWORD *dest,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        const void *a5)
{
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  _OWORD v15[6]; // [rsp+10h] [rbp-598h] BYREF
  __int64 v16; // [rsp+70h] [rbp-538h]
  _OWORD desta[15]; // [rsp+80h] [rbp-528h] BYREF
  _BYTE v18[208]; // [rsp+178h] [rbp-430h] BYREF
  _OWORD src[54]; // [rsp+248h] [rbp-360h] BYREF

  rg::search::SearchWorkerBuilder::new(v18);
  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 664)) )
  {
    *(_QWORD *)&desta[0] = 0x8000000000000000LL;
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, *(_QWORD *)(a2 + 672), *(_QWORD *)(a2 + 680));
    *(_QWORD *)&desta[1] = *(_QWORD *)&src[1];
    desta[0] = src[0];
  }
  v7 = rg::search::SearchWorkerBuilder::preprocessor(v18, desta);
  v9 = v8;
  if ( (v7 & 1) != 0 )
  {
    dest[1] = v8;
    *dest = 2LL;
    core::ptr::drop_in_place<rg::search::SearchWorkerBuilder>(v18);
    core::ptr::drop_in_place<rg::search::Printer<termcolor::Buffer>>(a5);
    core::ptr::drop_in_place<grep_searcher::searcher::Searcher>(a4);
    return core::ptr::drop_in_place<rg::search::PatternMatcher>(a3);
  }
  else
  {
    <ignore::gitignore::Gitignore as core::clone::Clone>::clone(src, a2 + 392);
    *(_QWORD *)&desta[6] = *(_QWORD *)&src[6];
    desta[5] = src[5];
    desta[4] = src[4];
    desta[3] = src[3];
    desta[2] = src[2];
    desta[1] = src[1];
    desta[0] = src[0];
    rg::search::SearchWorkerBuilder::preprocessor_globs(v9, desta);
    *(_BYTE *)(v9 + 132) = *(_BYTE *)(a2 + 908);
    *(_WORD *)(v9 + 130) = *(_WORD *)(a2 + 792);
    *(_WORD *)(v9 + 128) = *(_WORD *)(a2 + 794);
    v16 = *((_QWORD *)a3 + 12);
    v15[5] = a3[5];
    v15[4] = a3[4];
    v11 = *a3;
    v12 = a3[1];
    v13 = a3[2];
    v15[3] = a3[3];
    v15[2] = v13;
    v15[1] = v12;
    v15[0] = v11;
    memcpy(desta, a5, sizeof(desta));
    rg::search::SearchWorkerBuilder::build(src, v18, v15, a4, desta);
    memcpy(dest, src, 0x330uLL);
    return core::ptr::drop_in_place<rg::search::SearchWorkerBuilder>(v18);
  }
}