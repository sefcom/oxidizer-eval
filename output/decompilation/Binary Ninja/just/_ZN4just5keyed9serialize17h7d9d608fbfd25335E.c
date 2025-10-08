
  int64_t just::keyed::serialize::h7d9d608fbfd25335(void* arg1, int64_t arg2)

{
    void* rax;
    uint64_t rdx;
    rax = _$LT$alloc..sync..Arc$LT$T$GT$$u20$as$u20$just..keyed..Keyed$GT$::key::h571a7d93e82dd532(
        arg1);
    /* tailcall */
    return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_str::h3595d83cd5df5c10(arg2, rax, rdx);
}
