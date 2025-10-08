__int64 __fastcall linera_exporter::common::_::<impl core::fmt::Debug for linera_exporter::common::BlockId>::fmt(
        __int64 a1,
        __int64 a2)
{
  _BYTE v3[56]; // [rsp+0h] [rbp-38h] BYREF

  core::fmt::Formatter::debug_struct(v3, a2, aBlockid, 7LL);
  core::fmt::builders::DebugStruct::field(v3, aHash_0, 4LL, a1, &unk_13E5D68);
  core::fmt::builders::DebugStruct::field(v3, aChainId, 8LL, a1 + 32, &unk_13EE2C8);
  core::fmt::builders::DebugStruct::field(v3, aHeight, 6LL, a1 + 64, &unk_13EE328);
  return core::fmt::builders::DebugStruct::finish(v3);
}