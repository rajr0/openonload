#undef EFX_USE_IRQ_SET_AFFINITY_HINT
#undef EFX_HAVE_ROUND_JIFFIES_UP
#undef EFX_NEED_PCI_CLEAR_MASTER
#define EFX_NEED_PCI_CLEAR_MASTER
#undef EFX_HAVE_IOMMU_FOUND
#undef EFX_NEED_GETNSTIMEOFDAY
#define EFX_NEED_GETNSTIMEOFDAY
#undef EFX_NEED_NS_TO_TIMESPEC
#define EFX_NEED_NS_TO_TIMESPEC
#undef EFX_HAVE_XEN_START_INFO
#undef EFX_NEED_SET_NORMALIZED_TIMESPEC
#define EFX_NEED_SET_NORMALIZED_TIMESPEC
