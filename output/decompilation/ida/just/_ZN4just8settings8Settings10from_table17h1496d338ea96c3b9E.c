void *__fastcall just::settings::Settings::from_table(void *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  char v4; // bp
  char v5; // r14
  char v6; // r13
  _BYTE *v7; // r14
  _BYTE src[328]; // [rsp+10h] [rbp-268h] BYREF
  _BYTE v10[16]; // [rsp+158h] [rbp-120h] BYREF
  char v11; // [rsp+168h] [rbp-110h]
  char v12; // [rsp+169h] [rbp-10Fh]
  __int128 v13; // [rsp+170h] [rbp-108h]
  __int64 v14; // [rsp+180h] [rbp-F8h]
  __int64 v15; // [rsp+188h] [rbp-F0h]
  __int64 v16; // [rsp+190h] [rbp-E8h]
  char v17; // [rsp+198h] [rbp-E0h]
  char v18; // [rsp+199h] [rbp-DFh]
  char v19; // [rsp+19Ah] [rbp-DEh]
  _OWORD v20[6]; // [rsp+19Bh] [rbp-DDh]
  _BYTE v21[120]; // [rsp+200h] [rbp-78h] BYREF

  *(_QWORD *)src = 0x8000000000000000LL;
  *(_QWORD *)&src[312] = 0LL;
  *(_QWORD *)&src[24] = 0x8000000000000000LL;
  *(_DWORD *)&src[319] = 0;
  *(_QWORD *)&src[48] = 0x8000000000000000LL;
  *(_QWORD *)&src[120] = 0x8000000000000000LL;
  *(_QWORD *)&src[192] = 0x8000000000000000LL;
  *(_WORD *)&src[323] = 0;
  *(_QWORD *)&src[216] = 0x8000000000000000LL;
  *(_QWORD *)&src[288] = 0x8000000000000000LL;
  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21, a2);
  while ( 1 )
  {
    <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(v10, v21);
    if ( v11 == 20 )
      break;
    v2 = v15;
    v3 = v16;
    v4 = v17;
    v5 = v18;
    v6 = v19;
    switch ( v11 )
    {
      case 0:
        src[312] = v12 & 1;
        continue;
      case 1:
        src[313] = v12 & 1;
        continue;
      case 2:
        core::ptr::drop_in_place<regex::error::Error>(src);
        *(_QWORD *)&src[16] = v14;
        *(_OWORD *)src = v13;
        continue;
      case 3:
        src[314] = v12 & 1;
        continue;
      case 4:
        src[315] = v12 & 1;
        continue;
      case 5:
        v7 = &src[24];
        goto LABEL_24;
      case 6:
        src[316] = v12 & 1;
        continue;
      case 7:
        src[317] = v12 & 1;
        continue;
      case 8:
        src[318] = v12 & 1;
        continue;
      case 9:
        src[319] = v12 & 1;
        continue;
      case 10:
        src[320] = v12 & 1;
        continue;
      case 11:
        src[321] = v12 & 1;
        continue;
      case 12:
        src[322] = v12 & 1;
        continue;
      case 13:
        core::ptr::drop_in_place<core::option::Option<just::interpreter::Interpreter>>(&src[48]);
        *(_QWORD *)&src[64] = v14;
        *(_OWORD *)&src[48] = v13;
        *(_QWORD *)&src[72] = v2;
        *(_QWORD *)&src[80] = v3;
        src[88] = v4;
        src[89] = v5;
        src[90] = v6;
        *(_OWORD *)&src[104] = *(_OWORD *)((char *)v20 + 13);
        *(_OWORD *)&src[91] = v20[0];
        continue;
      case 14:
        core::ptr::drop_in_place<core::option::Option<just::interpreter::Interpreter>>(&src[120]);
        *(_QWORD *)&src[136] = v14;
        *(_OWORD *)&src[120] = v13;
        *(_QWORD *)&src[144] = v2;
        *(_QWORD *)&src[152] = v3;
        src[160] = v4;
        src[161] = v5;
        src[162] = v6;
        *(_OWORD *)&src[176] = *(_OWORD *)((char *)v20 + 13);
        *(_OWORD *)&src[163] = v20[0];
        continue;
      case 15:
        v7 = &src[192];
        core::ptr::drop_in_place<regex::error::Error>(&src[192]);
        goto LABEL_25;
      case 16:
        src[323] = v12 & 1;
        continue;
      case 17:
        src[324] = v12 & 1;
        continue;
      case 18:
        core::ptr::drop_in_place<core::option::Option<just::interpreter::Interpreter>>(&src[216]);
        *(_QWORD *)&src[232] = v14;
        *(_OWORD *)&src[216] = v13;
        *(_QWORD *)&src[240] = v2;
        *(_QWORD *)&src[248] = v3;
        src[256] = v4;
        src[257] = v5;
        src[258] = v6;
        *(_OWORD *)&src[272] = *(_OWORD *)((char *)v20 + 13);
        *(_OWORD *)&src[259] = v20[0];
        continue;
      case 19:
        v7 = &src[288];
LABEL_24:
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v7);
LABEL_25:
        *((_QWORD *)v7 + 2) = v14;
        *(_OWORD *)v7 = v13;
        break;
    }
  }
  core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<&str,just::set::Set>>(v21);
  return memcpy(a1, src, 0x148uLL);
}