#pragma once
#include <list>
#include <memory>
#include <stdexcept>
#include <functional>
#include <algorithm>

#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"
#include "SnakeController.hpp"

class Event;
class IPort;

struct Segment{
    int x;
    int y;
};

class SnakeSegments{
public:
    SnakeSegments(std::list<Segment> m_segments):
    m_segments{m_segments}{}

    bool isSegmentAtPosition(int x, int y) const;
    Segment calculateNewHead() const;
    void updateSegmentsIfSuccessfullMove(Segment const& newHead);
    void addHeadSegment(Segment const& newHead);
    void removeTailSegmentIfNotScored(Segment const& newHead);
    void removeTailSegment();

private:
    std::list<Segment> m_segments;
};
