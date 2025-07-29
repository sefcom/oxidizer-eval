_QWORD *__fastcall flealib::commandparser::CommandParser::get_command(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rsi
  __int128 v13; // xmm0
  __int128 v14; // [rsp+0h] [rbp-1C8h] BYREF
  _QWORD *v15; // [rsp+10h] [rbp-1B8h]
  __int128 v16; // [rsp+18h] [rbp-1B0h]
  __int64 v17; // [rsp+28h] [rbp-1A0h]
  __int128 v18; // [rsp+30h] [rbp-198h]
  _QWORD *v19; // [rsp+40h] [rbp-188h]
  _QWORD v20[5]; // [rsp+48h] [rbp-180h] BYREF
  __int128 v21; // [rsp+70h] [rbp-158h] BYREF
  __int64 v22; // [rsp+80h] [rbp-148h]
  _QWORD dest[17]; // [rsp+88h] [rbp-140h] BYREF
  _OWORD src[11]; // [rsp+110h] [rbp-B8h] BYREF

  roxmltree::parse::parse(src);
  if ( __OFSUB__(0LL, *(_QWORD *)&src[0]) )
    goto LABEL_2;
  memcpy(dest, src, sizeof(dest));
  if ( !dest[2] )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_708F38);
  *(_QWORD *)&v14 = dest;
  *((_QWORD *)&v14 + 1) = dest[1];
  LODWORD(v15) = 1;
  roxmltree::Descendants::new(v20, &v14);
  core::iter::traits::iterator::Iterator::try_fold(&v14, v20);
  v5 = v14;
  if ( !(_QWORD)v14 )
  {
    core::ptr::drop_in_place<roxmltree::Document>(dest);
    if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    {
LABEL_3:
      roxmltree::parse::parse(dest);
      if ( dest[0] != 0x8000000000000000LL )
        goto LABEL_5;
      *(_QWORD *)&src[3] = dest[7];
      src[2] = *(_OWORD *)&dest[5];
      src[1] = *(_OWORD *)&dest[3];
      src[0] = *(_OWORD *)&dest[1];
      v20[0] = src;
      v20[1] = <roxmltree::parse::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &unk_708F18;
      *((_QWORD *)&v14 + 1) = 2LL;
      v15 = v20;
      v16 = 1uLL;
      std::io::stdio::_print(&v14);
      core::ptr::drop_in_place<roxmltree::parse::Error>(src, a3);
      if ( dest[0] != 0x8000000000000000LL )
LABEL_5:
        core::ptr::drop_in_place<core::result::Result<roxmltree::Document,roxmltree::parse::Error>>(dest);
      a1[1] = aCommandXmlCorr;
      a1[2] = 21LL;
      *a1 = 0x8000000000000000LL;
      return a1;
    }
LABEL_2:
    core::ptr::drop_in_place<core::result::Result<roxmltree::Document,roxmltree::parse::Error>>(src);
    goto LABEL_3;
  }
  v6 = *((_QWORD *)&v14 + 1);
  v7 = roxmltree::Node::attribute(v14, *((_QWORD *)&v14 + 1), aName_1, 4LL);
  if ( !v7 )
    v8 = 28LL;
  v9 = aNameAttributeN;
  if ( v7 )
    v9 = (const char *)v7;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v14, v9, v8);
  v19 = v15;
  v18 = v14;
  v10 = roxmltree::Node::attribute(v5, v6, aValue, 5LL);
  if ( !v10 )
    v11 = 29LL;
  v12 = &aNameAttributeN[28];
  if ( v10 )
    v12 = (char *)v10;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v21, v12, v11);
  v17 = v22;
  v16 = v21;
  v15 = v19;
  v13 = v18;
  v14 = v18;
  a1[4] = *((_QWORD *)&v21 + 1);
  a1[5] = v17;
  a1[2] = v15;
  a1[3] = v16;
  *(_OWORD *)a1 = v13;
  core::ptr::drop_in_place<roxmltree::Document>(dest);
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
    core::ptr::drop_in_place<core::result::Result<roxmltree::Document,roxmltree::parse::Error>>(src);
  return a1;
}