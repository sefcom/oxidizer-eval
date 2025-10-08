__int64 __fastcall linera_exporter::common::_::<impl core::fmt::Debug for linera_exporter::common::ExporterError>::fmt(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  __int64 (__fastcall **v5)(); // rdx
  const char *v6; // rdx
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE v11[40]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1;
  v3 = *a1 + 0x7FFFFFFFFFFFFFEELL;
  v4 = 0LL;
  if ( v3 < 0xA )
    v4 = v3 + 1;
  switch ( v4 )
  {
    case 0uLL:
      core::fmt::Formatter::debug_tuple(v11, a2, aBadnotificatio, 15LL);
      v5 = &off_13F2258;
      goto LABEL_18;
    case 1uLL:
      ++v2;
      v7 = aStateerror;
      v8 = 10LL;
      goto LABEL_11;
    case 2uLL:
      ++v2;
      core::fmt::Formatter::debug_tuple(v11, a2, aReadcertificat, 20LL);
      v5 = (__int64 (__fastcall **)())&unk_13E5D68;
      goto LABEL_18;
    case 3uLL:
      ++v2;
      v7 = aViewerror;
      v8 = 9LL;
LABEL_11:
      core::fmt::Formatter::debug_tuple(v11, a2, v7, v8);
      v5 = &off_13F2278;
      goto LABEL_18;
    case 4uLL:
      v6 = (const char *)&unk_21E590;
      goto LABEL_13;
    case 5uLL:
      v6 = (const char *)&unk_21F3E0;
LABEL_13:
      v9 = 16LL;
      goto LABEL_15;
    case 6uLL:
      v6 = aBadinitializat;
      v9 = 17LL;
LABEL_15:
      core::fmt::Formatter::debug_struct(v11, a2, v6, v9);
      return core::fmt::builders::DebugStruct::finish(v11);
    case 7uLL:
      ++v2;
      core::fmt::Formatter::debug_tuple(v11, a2, aChainalreadyex, 18LL);
      v5 = (__int64 (__fastcall **)())&unk_13EE2C8;
      goto LABEL_18;
    case 8uLL:
      ++v2;
      core::fmt::Formatter::debug_tuple(v11, a2, aSynchronizatio, 21LL);
      v5 = &off_13F2298;
      goto LABEL_18;
    case 9uLL:
      ++v2;
      core::fmt::Formatter::debug_tuple(v11, a2, aGrpcerror, 9LL);
      v5 = &off_13F22B8;
      goto LABEL_18;
    case 0xAuLL:
      ++v2;
      core::fmt::Formatter::debug_tuple(v11, a2, aGenericerror, 12LL);
      v5 = &off_13F22D8;
LABEL_18:
      core::fmt::builders::DebugTuple::field(v11, v2, v5);
      return core::fmt::builders::DebugTuple::finish(v11);
  }
}