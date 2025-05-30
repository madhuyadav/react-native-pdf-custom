
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GeneratePropsH.js
 */
#pragma once

#include <react/renderer/components/view/ViewProps.h>
#include <react/renderer/core/PropsParserContext.h>

namespace facebook::react {

class RNPDFPdfViewProps final : public ViewProps {
 public:
  RNPDFPdfViewProps() = default;
  RNPDFPdfViewProps(const PropsParserContext& context, const RNPDFPdfViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  std::string path{};
  int page{0};
  Float scale{0.0};
  Float minScale{0.0};
  Float maxScale{0.0};
  bool horizontal{false};
  bool enablePaging{false};
  bool enableRTL{false};
  bool enableAnnotationRendering{false};
  bool showsHorizontalScrollIndicator{false};
  bool showsVerticalScrollIndicator{false};
  bool scrollEnabled{false};
  bool enableAntialiasing{false};
  bool enableDoubleTapZoom{false};
  int fitPolicy{0};
  int spacing{0};
  std::string password{};
  bool singlePage{false};
};

} // namespace facebook::react
