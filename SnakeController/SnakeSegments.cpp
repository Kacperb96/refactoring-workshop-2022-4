#include "SnakeSegments.hpp"

namespace Segments{
SnakeSegments::SnakeSegments(std::list<Segment> m_segments):
m_segments{m_segments}{

}

bool SnakeSegments::isSegmentAtPosition(int x, int y) const{
    return m_segments.end() !=  std::find_if(m_segments.cbegin(), m_segments.cend(),
        [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
}
}